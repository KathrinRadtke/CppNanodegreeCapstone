#pragma once

#include "gameObject.h"
#include <iostream>

class Player: public GameObject
{
    public:
        Player(int xPosition, int yPosition, std::string spriteName) : GameObject(xPosition, yPosition, spriteName){};

        void Update(Input input) override;
        void Init() override;

    private:
        InputHandler inputHandler;

        void Move(Input input);
};