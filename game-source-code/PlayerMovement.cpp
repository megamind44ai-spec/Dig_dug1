#include "PlayerMovement.h"

PlayerMovement::PlayerMovement(){};

void PlayerMovement::move(){

    if(IsKeyDown(KEY_LEFT)){playerPosition_.x - PLAYER_SPEED;}
    if(IsKeyDown(KEY_LEFT)){playerPosition_.x + PLAYER_SPEED;}
    if(IsKeyDown(KEY_LEFT)){playerPosition_.y - PLAYER_SPEED;}
    if(IsKeyDown(KEY_LEFT)){playerPosition_.y + PLAYER_SPEED;}

}

