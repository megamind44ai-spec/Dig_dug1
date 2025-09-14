#pragma once
#include "raylib-cpp.hpp"
#include "PlayerMovement.h"
#include "Map.h"
#include "Drawer.h"


class GameScreen{
    public:
    GameScreen();

    void playGame();


    private:
    PlayerMovement player_;
    Map map_;
    Drawer drawer_;
    

    

};