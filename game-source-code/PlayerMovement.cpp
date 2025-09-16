#include "PlayerMovement.h"

PlayerMovement::PlayerMovement(float xPosition, float yPosition):playerPosition_(xPosition, yPosition) {}

void PlayerMovement::move(Direction dir){

    switch(dir){

        case Direction::LEFT: playerPosition_.x -= PLAYER_SPEED;
        case Direction::RIGHT: playerPosition_.x += PLAYER_SPEED;
        case Direction::UP: playerPosition_.y -= PLAYER_SPEED;
        case Direction::DOWN: playerPosition_.y += PLAYER_SPEED;
        case Direction::INPUT: {
         if(IsKeyDown(KEY_LEFT)){playerPosition_.x -= PLAYER_SPEED;}
         else if(IsKeyDown(KEY_RIGHT)){playerPosition_.x += PLAYER_SPEED;}
         else if(IsKeyDown(KEY_UP)){playerPosition_.y -= PLAYER_SPEED;}
         else if(IsKeyDown(KEY_DOWN)){playerPosition_.y += PLAYER_SPEED;}}

    }
   

   if(playerPosition_.x < 0) {playerPosition_.x = 0;}
   if(playerPosition_.x+ PLAYER_SIZE > SCREEN_WIDTH) {playerPosition_.x = SCREEN_WIDTH - PLAYER_SIZE;}
   if(playerPosition_.y < TOP_BORDER ) {playerPosition_.y = TOP_BORDER;}
   if(playerPosition_.y + PLAYER_SIZE > BOTTOM_BORDER) {playerPosition_.y = BOTTOM_BORDER - PLAYER_SIZE;}

   



}

Vector2 PlayerMovement::GetPlayerPosistion() const{

    return playerPosition_;
}
