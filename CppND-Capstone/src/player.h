#pragma once

#include "gameObject.h"
#include "maze.h"
#include <iostream>

class Player: public GameObject
{
    public:
        Player(int xPosition, int yPosition, std::string spriteName, Maze maze) : GameObject(xPosition, yPosition, spriteName), maze(maze){
            currentCell = maze.cells[xPosition][yPosition];
            std::cout << xPosition << std::endl;
        };

        void Update(Input input) override;
        void Init() override;

    private:
        void Move(Input input);
        Maze maze;
        Cell currentCell;
};