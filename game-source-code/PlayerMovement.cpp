#include "PlayerMovement.h"

PlayerMovement::PlayerMovement(){};

void PlayerMovement::move(){

    if(IsKeyDown(KEY_LEFT)){playerPosition_.x -= PLAYER_SPEED;}
   else if(IsKeyDown(KEY_RIGHT)){playerPosition_.x += PLAYER_SPEED;}
   else if(IsKeyDown(KEY_UP)){playerPosition_.y -= PLAYER_SPEED;}
   else if(IsKeyDown(KEY_DOWN)){playerPosition_.y += PLAYER_SPEED;}

}

Vector2 PlayerMovement::GetPlayerPosistion() const{

    return playerPosition_;
}
