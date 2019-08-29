#include "cell.h"
#include <iostream>

Cell::Cell(int xPosition, int yPosition) : xPosition(xPosition), yPosition(yPosition)
{
    CalculateWalls();
}

void Cell::CalculateWalls()
{
    wallLeft = Wall(xPosition, yPosition + 1, xPosition, yPosition);
    wallTop = Wall(xPosition, yPosition, xPosition + 1, yPosition);
    wallRight = Wall(xPosition + 1, yPosition, xPosition + 1, yPosition + 1);
    wallBottom = Wall(xPosition + 1, yPosition + 1, xPosition + 1, yPosition + 1);
}

void Cell::Merge(Cell *cell)
{
    if(cell->xPosition > xPosition)
    {
        std::cout << "left / right" << std::endl;
        cell->wallLeft.enabled = false;
        wallRight.enabled = false;
    }
    if(cell->xPosition < xPosition)
    {
        std::cout << "right / left" << std::endl;
        cell->wallRight.enabled = false;
        wallLeft.enabled = false;
    }
    if(cell->yPosition < yPosition)
    {
        std::cout << "top / bottom" << std::endl;
        cell->wallTop.enabled = false;
        wallBottom.enabled = false;
    }
    if(cell->yPosition > yPosition)
    {        
        std::cout << "bottom / top" << std::endl;
        cell->wallBottom.enabled = false;
        wallTop.enabled = false;
    }
}
