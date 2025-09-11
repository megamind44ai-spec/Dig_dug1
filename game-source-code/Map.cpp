#include "Map.h"

Map::Map(): MapSize_({0,120, 1000, 720}) {}
 // map dimensions calculated via mathematics
// 1000 x 900 screen assumed; to be made flexible soon. Map does not fill entire screen

void Map::duggedCoordinates(){


    
        float x_coordinate = player_.GetPlayerPosistion().x;
        float y_coordinate = player_.GetPlayerPosistion().y;
        Rectangle block{x_coordinate, y_coordinate, PLAYER_SIZE, PLAYER_SIZE};
        
     
      for(const auto& searcher: dug_){
        
        if(searcher.x != block.x && searcher.y != block.y){

            dug_.push_back(block);

        }
      }

}