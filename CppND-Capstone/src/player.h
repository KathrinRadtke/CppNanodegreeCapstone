#pragma once

#include "gameObject.h"

class Player: public GameObject
{
    public:
        void Update() override;
        void Init() override;
};