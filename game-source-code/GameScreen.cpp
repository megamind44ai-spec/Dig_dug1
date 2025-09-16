#include "GameScreen.h"


GameScreen::GameScreen(): map_(player_), drawer_(player_, map_){}

// GameScreen.cpp
void GameScreen::playGame() {
    player_.move(Direction::INPUT);
    map_.duggedCoordinates();  // record current tile
    drawer_.mapDrawer();
     drawer_.duggedDrawer(); 
  
      // draw dug tiles
    drawer_.playerDrawer();
}




