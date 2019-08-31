#pragma once

#include "gameObject.h"

class Goal : public GameObject
{
    public:
        Goal(int xPosition, int yPosition, std::string spriteName) : GameObject(xPosition, yPosition, spriteName){};
        void Update(Input input) override;
        void GoalReached();
};