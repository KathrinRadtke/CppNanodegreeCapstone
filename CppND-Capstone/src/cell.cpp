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
    wallBottom = Wall(xPosition + 1, yPosition + 1, xPosition, yPosition + 1);
}

void Cell::Merge(Cell *cell)
{
    if(cell->xPosition > xPosition)
    {
        cell->wallLeft.enabled = false;
        wallRight.enabled = false;
    }
    if(cell->xPosition < xPosition)
    {
        cell->wallRight.enabled = false;
        wallLeft.enabled = false;
    }
    if(cell->yPosition > yPosition)
    {
        cell->wallTop.enabled = false;
        wallBottom.enabled = false;
    }
    if(cell->yPosition < yPosition)
    {        
        cell->wallBottom.enabled = false;
        wallTop.enabled = false;
    }
}

bool Cell::IsMovementAllowed(int newXPosition, int newYPosition)
{
    if(xPosition > newXPosition)
    {
        return !wallLeft.enabled;
    }
    if(xPosition < newXPosition)
    {
        return !wallRight.enabled;
    }
    if(yPosition > newYPosition)
    {
        return !wallTop.enabled;
    }
    if(yPosition < newYPosition)
    {        
        return !wallBottom.enabled;
    }
    return false;
}

