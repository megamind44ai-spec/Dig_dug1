#include "Map.h"

Map::Map(PlayerMovement& player): player_(player), MapSize_({0,120, 1000, 720}) {}
 // map dimensions calculated via mathematics
// 1000 x 900 screen assumed; to be made flexible soon. Map does not fill entire screen

void Map::duggedCoordinates(){


    
        float x_coordinate = player_.GetPlayerPosition().x;
        float y_coordinate = player_.GetPlayerPosition().y;
        Rectangle block{x_coordinate, y_coordinate, PLAYER_SIZE, PLAYER_SIZE};
        
        

          dug_.push_back(block);
        
     
      

}

Rectangle Map::getMapSize(){

   return MapSize_;
}

vector<Rectangle> Map::giveDuggedCoordinates(){

    return dug_;
}

bool operator==(Rectangle first, Rectangle second){

  return first.x == second.x && first.y == second.y;
}