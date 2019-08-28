#include <iostream>
#include "game.h"
#include "renderer.h"
#include "inputHandler.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Game game(renderer, kGridWidth, kGridHeight, kMsPerFrame);
  InputHandler inputHandler;
  game.Run();
  std::cout << "Game has terminated successfully!\n";
  return 0;
}