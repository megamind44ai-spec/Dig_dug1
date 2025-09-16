#pragma once
#include "raylib-cpp.hpp"

   const int PLAYER_SPEED = 5.0;
   const int PLAYER_SIZE = 40;
   const int SCREEN_WIDTH = 1000;
   const int SCREEN_HEIGHT = 900;
   const int TOP_BORDER = 120;
   const int BOTTOM_BORDER = 840;
   
   
class PlayerMovement{ //class that deals with the player's movement logic
    public:
    PlayerMovement();
    void move();
   Vector2 GetPlayerPosistion() const;
    
    private:
    Vector2 playerPosition_ = {500.0f,450.0f};
 

};