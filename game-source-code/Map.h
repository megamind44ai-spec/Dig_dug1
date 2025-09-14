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
    vector<Rectangle> dug_; //used to store coordinates of where the player passed, hence "digging".
    //Better than vectors in terms of time complexity. Vectors are O(n) vs unordered_set being O(1) in terms of iteration through
    //the container. Better for memory once the player moves throughout the entire map.
    PlayerMovement player_;
    Rectangle MapSize_;

};