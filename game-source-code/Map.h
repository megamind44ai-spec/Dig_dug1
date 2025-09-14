#pragma once

#include "PlayerMovement.h"
#include <algorithm>


const int PLAYER_SIZE = 40;

using namespace std;

class Map{
    public:
    Map(PlayerMovement& player);
    void duggedCoordinates();
    Rectangle getMapSize();
    vector<Rectangle> giveDuggedCoordinates();
    
    


    private:
    vector<Rectangle> dug_; 
    PlayerMovement& player_;
    Rectangle MapSize_;

};