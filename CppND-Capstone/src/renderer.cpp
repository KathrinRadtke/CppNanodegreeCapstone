#include "renderer.h"
#include <iostream>
#include <string>

std::string getResourcePath(const std::string &subDir = ""){
	//We need to choose the path separator properly based on which
	//platform we're running on, since Windows uses a different
	//separator than most systems
#ifdef _WIN32
	const char PATH_SEP = '\\';
#else
	const char PATH_SEP = '/';
#endif
	//This will hold the base resource path: Lessons/res/
	//We give it static lifetime so that we'll only need to call
	//SDL_GetBasePath once to get the executable path
	static std::string baseRes;
	if (baseRes.empty()){
		//SDL_GetBasePath will return NULL if something went wrong in retrieving the path
		char *basePath = SDL_GetBasePath();
		if (basePath){
			baseRes = basePath;
			SDL_free(basePath);
		}
		else {
			std::cerr << "Error getting resource path: " << SDL_GetError() << std::endl;
			return "";
		}
		//We replace the last bin/ with res/ to get the the resource path
		size_t pos = baseRes.rfind("build");
		baseRes = baseRes.substr(0, pos) + "res" + PATH_SEP;
	}
	//If we want a specific subdirectory path in the resource directory
	//append it to the base path. This would be something like Lessons/res/Lesson0
	return subDir.empty() ? baseRes : baseRes + subDir + PATH_SEP;
}

Renderer::Renderer(const std::size_t screen_width,
                   const std::size_t screen_height,
                   const std::size_t grid_width, const std::size_t grid_height)
    : screen_width(screen_width),
      screen_height(screen_height),
      grid_width(grid_width),
      grid_height(grid_height) {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cerr << "SDL could not initialize.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create Window
  sdl_window = SDL_CreateWindow("Dog Game", SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED, screen_width,
                                screen_height, SDL_WINDOW_SHOWN);

  if (nullptr == sdl_window) {
    std::cerr << "Window could not be created.\n";
    std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create renderer
  sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
  if (nullptr == sdl_renderer) {
    std::cerr << "Renderer could not be created.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }
}

Renderer::~Renderer() {
  SDL_DestroyWindow(sdl_window);
  SDL_Quit();
}

void Renderer::Clear()
{
  SDL_SetRenderDrawColor(sdl_renderer, 255, 180, 200, 255);
  SDL_RenderClear(sdl_renderer);
}

void Renderer::Render(const GameObject &gameObject)
{
  SDL_Rect block;
  block.w = grid_width;
  block.h = grid_height;
  block.x = gameObject.xPosition * block.w;
  block.y = gameObject.yPosition * block.h;


  std::string imagePath = getResourcePath("Objects") + gameObject.spriteName;
  SDL_Surface *bmp = SDL_LoadBMP(imagePath.c_str());

  SDL_Texture *tex = SDL_CreateTextureFromSurface(sdl_renderer, bmp);

  SDL_FreeSurface(bmp);
  SDL_RenderCopy(sdl_renderer, tex, NULL, &block);
}

void Renderer::Render(const Maze &maze)
{
  for(std::vector<Cell> rows : maze.cells)
  {
    for(Cell cell : rows)
    {
       SDL_Rect block;
      block.w = grid_width;
      block.h = grid_height;  
      block.x = cell.xPosition * block.w;
      block.y = cell.yPosition * block.h;

      Render(cell.wallLeft);
      Render(cell.wallTop);
      Render(cell.wallRight);
      Render(cell.wallBottom);
    }
  }
  
  // render goal
  SDL_Rect block;
  block.w = grid_width;
  block.h = grid_height;
  block.x = 19 * block.w;
  block.y = 19 * block.h;

  std::string imagePath = getResourcePath("Objects") + "bone.bmp";
  SDL_Surface *bone = SDL_LoadBMP(imagePath.c_str());

  SDL_Texture *boneTex = SDL_CreateTextureFromSurface(sdl_renderer, bone);

  SDL_FreeSurface(bone);
  SDL_RenderCopy(sdl_renderer, boneTex, NULL, &block);
}

void Renderer::Render(const Wall &wall)
{
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  if(wall.enabled)
  {
    SDL_RenderDrawLine(sdl_renderer, wall.startX * grid_width, wall.startY * grid_height, wall.endX * grid_width, wall.endY * grid_height);
  }
}



void Renderer::Apply()
{
   SDL_RenderPresent(sdl_renderer);
}
