#pragma once

#include "gameObject.h"
#include "maze.h"
#include <iostream>

class Player: public GameObject
{
    public:
        Player(int xPosition, int yPosition, std::string spriteName, Maze *maze) 
        : GameObject(xPosition, yPosition, spriteName), 
        startXPosition(xPosition), startYPosition(yPosition), maze(maze){
            currentCell = maze->cells[xPosition][yPosition];
        };

        void Update(Input input) override;
        void Init() override;

    private:
        int startXPosition;
        int startYPosition;

        void Move(Input input);
        void Reset();
        Maze* maze;
        Cell currentCell;
    
};