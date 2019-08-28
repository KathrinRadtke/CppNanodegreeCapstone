#pragma once

#include <string>
#include "inputHandler.h"

class GameObject
{
    public:
        float xPosition;
        float yPosition;
        std::string spriteName;

        virtual void Init() = 0;
        virtual void Update(Input input) = 0;

    protected:
        GameObject(int xPosition, int yPosition, std::string spriteName) 
    : xPosition(xPosition), yPosition(yPosition), spriteName(spriteName) {}

};