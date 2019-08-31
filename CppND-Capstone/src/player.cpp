#include <iostream>
#include "player.h"
#include "inputHandler.h"

void Player::Update(Input input)
{
    Move(input);
    if(maze->HasReachedEnding(xPosition, yPosition))
    {
        Reset();
    }

}

void Player::Reset()
{
    xPosition = startXPosition;
    yPosition = startYPosition;

    maze->Generate();

    currentCell = maze->cells[xPosition][yPosition];
}

void Player::Move(Input input)
{
    int newXPosition = xPosition;
    int newYPosition = yPosition;

    switch (input)
    {
    case Input::Left:
        newXPosition -= 1;
        break;
    case Input::Right:
        newXPosition += 1;
        break;
    case Input::Up:
        newYPosition -= 1;
        break;
    case Input::Down:
        newYPosition += 1;
        break;
    default:
        break;
    }

    if((xPosition != newXPosition || yPosition != newYPosition) 
        && maze->IsMovementAllowed(currentCell, newXPosition, newYPosition))
    {
        xPosition = newXPosition;
        yPosition = newYPosition;
        currentCell = maze->cells[xPosition][yPosition];
    }
}

void Player::Init()
{
        std::cout << "Player init " << std::endl;
}