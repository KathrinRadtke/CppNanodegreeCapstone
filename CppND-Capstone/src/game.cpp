#include "game.h"
#include <iostream>

Game::Game(Renderer &renderer, std::size_t grid_width, std::size_t grid_height, std::size_t target_frame_duration)
    : engine(dev()),
      renderer(renderer),
      random_w(0, static_cast<int>(grid_width)),
      random_h(0, static_cast<int>(grid_height)),
      target_frame_duration(target_frame_duration) 
{
  Setup();
}

void Game::Setup()
{
  std::shared_ptr<Player> player(new Player(10, 10, "dog.bmp"));
  gameObjects.push_back(player);
}

void Game::Run() 
{
  bool running = true;
  InputHandler inputHandler;

  while (running) {
    Input input = inputHandler.GetInput();

    if(input == Input::Exit)
    {
      running = false;
      break;
    }

    frame_start = SDL_GetTicks();

    Update(input);

    frame_end = SDL_GetTicks();

    WaitForTargetFrameRate();
  }
}

void Game::Update(Input input) 
{
  renderer.Clear();
  for(int i = 0; i< gameObjects.size(); i++)
  {
    gameObjects[i]->Update(input);
    renderer.Render(*gameObjects[i]);
  }
  renderer.Apply();
}

void Game::WaitForTargetFrameRate()
{
    frame_duration = frame_end - frame_start;
    if (frame_duration < target_frame_duration) {
      SDL_Delay(target_frame_duration - frame_duration);
    }
}
