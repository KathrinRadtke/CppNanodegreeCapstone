#pragma once

#include <vector>

struct Wall
{
    public:
        Wall() : startX(0), startY(0), endX(0), endY(0){};
        Wall(int startX, int startY, int endX, int endY) : startX(startX), startY(startY), endX(endX), endY(endY){};
        
        bool enabled = true;
        
        int startX = 0;
        int startY = 0;
        int endX = 0;
        int endY = 0;
};