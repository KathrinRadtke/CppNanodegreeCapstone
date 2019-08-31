#pragma once

#include "wall.h"

class Cell
{
    public:
        Wall wallLeft;
        Wall wallRight;
        Wall wallTop;
        Wall wallBottom;

        bool visited;

        int xPosition;
        int yPosition;

        Cell() : xPosition(0), yPosition(0){};
        Cell(int xPosition, int yPosition);
        
        void CalculateWalls();
        bool IsMovementAllowed(int newXPosition, int newYPosition);
        void Merge(Cell* cell);
};