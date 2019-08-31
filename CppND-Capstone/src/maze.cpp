#include "maze.h"
#include <iostream>

Maze::Maze(int horizontalCellCount, int verticalCellCount) : horizontalCellCount(horizontalCellCount), verticalCellCount(verticalCellCount)
{
    Generate();
}

Maze::~Maze()
{
    cells.clear();
    while(backtrackCells.size() > 0)
    {
        Cell* temp = backtrackCells.top();
        delete(temp);
        backtrackCells.pop();
    }
}

void Maze::Generate()
{
    CreateCells();
    StartGeneration();
}

void Maze::CreateCells()
{
    cells.clear();

    while(backtrackCells.size() > 0)
    {
        Cell* temp = backtrackCells.top();
        delete(temp);
        backtrackCells.pop();
    }

    for(int i = 0; i< horizontalCellCount; i++)
    {
        std::vector<Cell> column;
    
        for(int j = 0; j < verticalCellCount; j++)
        {
            Cell cell(i, j);
            column.push_back(cell);
            std::cout << "add Cell " << cell.xPosition << " : " << cell.yPosition << std::endl;

        }
        cells.push_back(column);
    }
}

void Maze::StartGeneration()
{
    currentCell = &cells[0][0];
    currentCell-> visited = true;
    visitedCellCount = 0;

    srand(time(NULL));

    VisitNextCell();
}

void Maze::VisitNextCell()
{
    if(visitedCellCount <  horizontalCellCount * verticalCellCount)
    {
        if(HasUnvisitedNeighbor(*currentCell))
        { 
            Cell* tempCell = GetRandomUnvisitedNeighbor(*currentCell);
            currentCell->Merge(tempCell);
            currentCell = tempCell;
            currentCell->visited = true;
            visitedCellCount++;
            backtrackCells.push(currentCell);
            VisitNextCell();
        }
        else if(backtrackCells.size() > 0)
        {
            currentCell = backtrackCells.top();
            backtrackCells.pop();
            VisitNextCell();
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
    int randomNumber;
    do{
        randomNumber = std::rand()/((RAND_MAX + 1u)/neighbors.size() - 1);
    }while(neighbors[randomNumber]->visited);

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

bool Maze::IsMovementAllowed(Cell start, int newXPosition, int newYPosition)
{
    return start.IsMovementAllowed(newXPosition, newYPosition);
}

bool Maze::HasReachedEnding(int xPosition, int yPosition)
{
    return xPosition == horizontalCellCount - 1  && yPosition == verticalCellCount - 1;
}

