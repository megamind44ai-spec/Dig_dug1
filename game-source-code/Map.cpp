#include "Map.h"

Map::Map(PlayerMovement& player): player_(player), MapSize_({0,120, 1000, 720}) {


initMonsterPositions();

}
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

void Map:: initMonsterPositions(){

  //initialises four tunnels for monsters, same tunnel size
  auto tunnel_size = 6;

   // top right, horizontal 
  auto top_right_x = 700;
  auto top_right_y = 200;

  //top left, vertical

  auto top_left_x = 100;
  auto top_left_y = 200;


  //bottom left, horizontal

  auto bottom_left_x = 100;
  auto bottom_left_y = 600;

  //bottom right, vertical

  auto bottom_right_x = 700;
  auto bottom_right_y = 500;

  for(auto i = 0; i < tunnel_size; i++){

    Rectangle block_top_right(top_right_x + i * PLAYER_SIZE, top_right_y, PLAYER_SIZE, PLAYER_SIZE );
     Rectangle block_top_left(top_left_x , top_left_y + i * PLAYER_SIZE, PLAYER_SIZE, PLAYER_SIZE );
     Rectangle block_bottom_left(bottom_left_x +i*PLAYER_SIZE, bottom_left_y, PLAYER_SIZE, PLAYER_SIZE);
     Rectangle block_bottom_right(bottom_right_x , bottom_right_y +i*PLAYER_SIZE, PLAYER_SIZE, PLAYER_SIZE);

    dug_.push_back(block_top_right);
     dug_.push_back(block_top_left);
     dug_.push_back(block_bottom_left);
     dug_.push_back(block_bottom_right);

  }

}