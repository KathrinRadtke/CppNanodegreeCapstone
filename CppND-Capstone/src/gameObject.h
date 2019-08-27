#pragma once

#include <string>

class GameObject
{
    public:
        float xPosition;
        float yPosition;

        virtual void Init() = 0;
        virtual void Update() = 0;

    private:
        std::string spriteName;
};