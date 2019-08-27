#ifndef GAME_H
#define GAME_H

#include <random>
#include <vector>
#include "SDL.h"
#include "renderer.h"
#include "inputHandler.h"
#include "gameObject.h"
#include "player.h"

class Game {
 public:
  Game(std::size_t grid_width, std::size_t grid_height);
  void Run(InputHandler &inputHandler, Renderer &renderer,
           std::size_t target_frame_duration);

 private:
  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  std::vector<GameObject*> gameObjects;

  void Setup();
  void Update(InputHandler &inputHandler);
};

#endif