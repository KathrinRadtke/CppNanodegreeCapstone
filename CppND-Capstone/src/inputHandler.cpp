#include <iostream>
#include "inputHandler.h"
#include "SDL.h"

Input InputHandler::GetInput()
{
    SDL_Event e;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) 
    {
    } 
    else if (e.type == SDL_KEYDOWN) {
      switch (e.key.keysym.sym) {
        case SDLK_UP:
          return Input::Up;
          break;

        case SDLK_DOWN:
          return Input::Down;
          break;

        case SDLK_LEFT:
          return Input::Left;
          break;

        case SDLK_RIGHT:
          return Input::Right;
          break;
      }
    }

  }

  return Input::None;
}