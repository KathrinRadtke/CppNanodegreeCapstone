# Dog Game

This project is a small game I build as the capstone project for my C++ Udacity-Nanodegree. 
The player navigates a dog through a randomly generated maze to find the bone on the other side. When the bone is collected, the player gets to the next level and a new maze will be generated.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./DogGame`.

## Classes and files

### Game
- setting up the game, initializing all the GameObjects
- running the update loop, call Update() on all the GameObjects
- calling input and rendering functions every tick

### Renderer
- draw everything on the screen with the SDL library
- load bmp images

### InputHandler
- poll for player input every frame

### GameObject
- abstract base class for every object in the game
- for now the only child-class is Player, but the game could be extended with collectible items or enemys that would also inherit the GameObject class

### Player
- inherits from GameObject
- takes input from the player and moves around the avatar
- uses the maze to determine where it can move (cannot walk through walls)

### Maze
- responsible for generating the maze
- using the Depth-first search algorithm: https://en.wikipedia.org/wiki/Maze_generation_algorithm#Depth-first_search
- creates a two dimensional vector of cells to to generate and hold all the information about the maze

### Cell
- represents a single cell in the maze
- has for walls that the player cannot walk through if they are enabled

### Wall
- a struct that holds information about start- and end points of a wall

## Rubric Points

#### The project uses Object Oriented Programming techniques
- encapsulation, abstraction, inheritance and polymorphism is used in different classes in the project (see other rubric points)

### Classes use appropriate access specifiers for class members
- eg. player.h

#### Class constructors utilize member initialization lists
- eg. gameObject.h:17 and player.h:9

#### Classes follow an appropriate inheritance hierarchy
- eg. GameObject and Player

#### Derived class functions override virtual base class functions
- eg. GameObject::Update() in gameObject.h:14, overridden in player.h:16
