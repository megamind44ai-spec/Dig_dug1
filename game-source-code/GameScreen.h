#pragma once
#include "Mode.h"
#include "raylib-cpp.hpp"


class GameScreen: public Mode{
    public:
    GameScreen();
    unique_ptr<Mode> update() override;

};