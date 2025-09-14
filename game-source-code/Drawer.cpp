#include "Drawer.h"

Drawer::Drawer(PlayerMovement& player, Map& map): player_(player), map_(map) {}

void Drawer::playerDrawer(){

    DrawRectangleV(player_.GetPlayerPosistion(), playerSize_, RED );
}

void Drawer::mapDrawer(){

    DrawRectangleRec(map_.getMapSize(), RAYWHITE);
}

void Drawer::duggedDrawer(){

    vector<Rectangle> duggedCoordinates = map_.giveDuggedCoordinates();

    for(auto &coordinate: duggedCoordinates  ){

        DrawRectangleRec(coordinate, BLACK);
    }
}
