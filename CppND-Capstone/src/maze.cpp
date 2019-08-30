#include "maze.h"
#include <iostream>

Maze::Maze(int horizontalCellCount, int verticalCellCount) : horizontalCellCount(horizontalCellCount), verticalCellCount(verticalCellCount)
{
    Generate();
}

void Maze::Generate()
{
    CreateCells();
    StartGeneration();
}

void Maze::CreateCells()
{
    for(int i = 0; i< horizontalCellCount; i++)
    {
        std::vector<Cell> column;
    
        for(int j = 0; j < verticalCellCount; j++)
        {
            Cell cell(i, j);
            column.push_back(cell);
        }
        cells.push_back(column);
    }
}

void Maze::StartGeneration()
{
    currentCell = &cells[0][0];
    currentCell-> visited = true;

    visitedCellCount = 0;
    VisitNextCell();
}

void Maze::VisitNextCell()
{
    if(visitedCellCount <  400/* horizontalCellCount * verticalCellCount*/)
    {
        if(HasUnvisitedNeighbor(*currentCell))
        { 
            Cell* tempCell = GetRandomUnvisitedNeighbor(*currentCell);
            currentCell->Merge(tempCell);
            currentCell = tempCell;
            currentCell->visited = true;
            visitedCellCount++;
            backtrackCells.push(currentCell);
            //std::cout << currentCell->xPosition << " " << currentCell->yPosition << std::endl;
           // std::cout << currentCell->wallBottom.enabled << " " << currentCell->wallRight.enabled << std::endl;
            //std::cout << cells[currentCell->xPosition][currentCell->yPosition].wallBottom.enabled << " " << cells[currentCell->xPosition][currentCell->yPosition].wallRight.enabled << std::endl;

            VisitNextCell();
        }
         else if(backtrackCells.size() > 0)
        {
            currentCell = backtrackCells.top();
            backtrackCells.pop();
        }
    }
}

bool Maze::HasUnvisitedNeighbor(Cell cell)
{
    bool hasUnvisitedNeighbor = false;
     for(Cell* neighbor : GetNeighbors(cell))
    {
        if(!neighbor->visited)
        {
            hasUnvisitedNeighbor = true;
            break;
        }
    }
    return hasUnvisitedNeighbor;
}

Cell* Maze::GetRandomUnvisitedNeighbor(Cell cell)
{
    std::vector<Cell*> neighbors = GetNeighbors(cell);
    int randomNumber = std::rand()/((RAND_MAX + 1u)/neighbors.size() - 1);
    std::cout << randomNumber << std::endl;
    return neighbors[randomNumber];
}

std::vector<Cell*> Maze::GetNeighbors(Cell cell)
{
    std::vector<Cell*> neighbors;
    if(cell.yPosition < verticalCellCount - 1)
    {
        neighbors.push_back(&cells[cell.xPosition][cell.yPosition + 1]);
    }
    if(cell.yPosition > 0)
    {
        neighbors.push_back(&cells[cell.xPosition][cell.yPosition - 1]);   
    }
    if(cell.xPosition < horizontalCellCount - 1)
    {
        neighbors.push_back(&cells[cell.xPosition + 1][cell.yPosition]);
    }
    if(cell.xPosition > 0)
    {
        neighbors.push_back(&cells[cell.xPosition - 1][cell.yPosition]);   
    }

    return neighbors;
}

