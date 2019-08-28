#include "game.h"
#include <iostream>

Game::Game(Renderer &renderer, std::size_t grid_width, std::size_t grid_height)
    : engine(dev()),
      renderer(renderer),
      random_w(0, static_cast<int>(grid_width)),
      random_h(0, static_cast<int>(grid_height)) 
{
}

void Game::Setup()
{

}

void Game::Run(std::size_t target_frame_duration) 
{
  Uint32 title_timestamp = SDL_GetTicks();
  Uint32 frame_start;
  Uint32 frame_end;
  Uint32 frame_duration;
  int frame_count = 0;
  bool running = true;

  InputHandler inputHandler;

  Player* player = new Player(10, 10, "dog.bmp");
  gameObjects.push_back(player);
  std::cout << "Hello " << std::endl;

  while (running) {
    Input input = inputHandler.GetInput();

    if(input == Input::Exit)
    {
      running = false;
      break;
    }

    frame_start = SDL_GetTicks();

    // Input, Update, Render - the main game loop.
    Update(input);

    frame_end = SDL_GetTicks();

    // Keep track of how long each loop through the input/update/render cycle
    // takes.
    frame_count++;
    frame_duration = frame_end - frame_start;

    // After every second, update the window title.
    if (frame_end - title_timestamp >= 1000) {
      frame_count = 0;
      title_timestamp = frame_end;
    }

    // If the time for this frame is too small (i.e. frame_duration is
    // smaller than the target ms_per_frame), delay the loop to
    // achieve the correct frame rate.
    if (frame_duration < target_frame_duration) {
      SDL_Delay(target_frame_duration - frame_duration);
    }
  }
}

void Game::Update(Input input) 
{
  renderer.Clear();
  for(GameObject *gameObject : gameObjects)
  {
    gameObject->Update(input);
    renderer.Render(*gameObject);
  }

  renderer.Apply();
}
