#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "gameObject.h"
#include "maze.h"
#include "cell.h"
#include "wall.h"
#include "SDL.h"

class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();

  void Clear();
  void Render(const GameObject &gameObject);
  void Render(const Maze &maze);
  void Render(const Wall &wall);
  void Apply();


  void Render();

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif