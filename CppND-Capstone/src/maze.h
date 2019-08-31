#pragma once

#include "cell.h"
#include <vector>
#include <stack>

class Maze
{
    public:
        Maze(int horizontalCellCount, int verticalCellCount);
        ~Maze();
        std::vector<std::vector<Cell>> cells;

        void Generate();
        bool IsMovementAllowed(Cell start, int newXPosition, int newYPosition);
        bool HasReachedEnding(int xPosition, int yPosition);


    private:
        std::stack<Cell*> backtrackCells;
        Cell* currentCell;
        int visitedCellCount;
        int horizontalCellCount;
        int verticalCellCount;

        void CreateCells();
        void StartGeneration();
        void VisitNextCell();

 
        bool HasUnvisitedNeighbor(Cell cell);
        Cell* GetRandomUnvisitedNeighbor(Cell cell);
        std::vector<Cell*> GetNeighbors(Cell cell);
};