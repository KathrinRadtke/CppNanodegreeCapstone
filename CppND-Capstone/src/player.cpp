#include <iostream>
#include "player.h"
#include "inputHandler.h"

void Player::Update(Input input)
{
    Move(input);
}

void Player::Move(Input input)
{
    switch (input)
    {
    case Input::Left:
        xPosition -= 1;
        break;
    case Input::Right:
        xPosition += 1;
        break;
    case Input::Up:
        yPosition -= 1;
        break;
    case Input::Down:
        yPosition += 1;
        break;
    default:
        break;
    }
}

void Player::Init()
{
        std::cout << "Player init " << std::endl;
}