#pragma once
#include "raylib-cpp.hpp"

   const int PLAYER_SPEED = 5.0;

class PlayerMovement{
    public:
    PlayerMovement();
    void move();
    
    private:
    Vector2 playerPosition_ = {100.0f,100.0f};
 

};