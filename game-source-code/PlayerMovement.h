#pragma once
#include "raylib-cpp.hpp"

   const int PLAYER_SPEED = 3.0;

class PlayerMovement{ //class that deals with the player's movement logic
    public:
    PlayerMovement();
    void move();
   Vector2 GetPlayerPosistion() const;
    
    private:
    Vector2 playerPosition_ = {100.0f,100.0f};
 

};