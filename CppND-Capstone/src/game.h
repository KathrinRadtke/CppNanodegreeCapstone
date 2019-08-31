#ifndef GAME_H
#define GAME_H

#include <random>
#include <vector>
#include "SDL.h"
#include "renderer.h"
#include "inputHandler.h"
#include "gameObject.h"
#include "player.h"
#include "maze.h"

class Game {
 public:
  Game(Renderer &renderer, std::size_t grid_width, std::size_t grid_height, std::size_t target_frame_duration);
  void Run();

 private:
  Renderer renderer;
  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  std::size_t target_frame_duration;
  Uint32 frame_start;
  Uint32 frame_end;
  Uint32 frame_duration;

  Maze maze;

  std::vector<std::shared_ptr<GameObject>> gameObjects;

  void Setup();
  void Update(Input input, Maze maze);

  void WaitForTargetFrameRate();
};

#endif