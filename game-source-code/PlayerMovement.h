#pragma once
#include "raylib-cpp.hpp"

   const float PLAYER_SPEED = 5.0;
   const int PLAYER_SIZE = 40;
   const int SCREEN_WIDTH = 1000;
   const int SCREEN_HEIGHT = 900;
   const int TOP_BORDER = 120;
   const int BOTTOM_BORDER = 840;


enum class Direction{LEFT, RIGHT, UP, DOWN, INPUT}; // to enable testing
   
   
class PlayerMovement{ //class that deals with the player's movement logic
    public:
    PlayerMovement(float xPosition = 450.0f , float yPosition = 450.0f);
    void move(Direction dir);
   Vector2 GetPlayerPosition() const;
    
    private:
    Vector2 playerPosition_;
 

};