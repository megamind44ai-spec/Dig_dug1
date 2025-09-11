#pragma once
#include "raylib-cpp.hpp"

   const int PLAYER_SPEED = 5.0;

class PlayerMovement{ //class that deals with the player's movement logic
    public:
    PlayerMovement();
    void move();
    Vector2 GetPlayerPosistion();
    
    private:
    Vector2 playerPosition_ = {100.0f,100.0f};
 

};