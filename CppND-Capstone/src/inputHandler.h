#pragma once

enum Input
{
    None,
    Left,
    Right,
    Up,
    Down,
    Exit
};

class InputHandler
{
    public:
    Input GetInput();
};