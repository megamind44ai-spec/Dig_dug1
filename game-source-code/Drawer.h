#pragma once
#include "PlayerMovement.h"
#include "Map.h"
#include <iostream>


class Drawer{
    public:
    Drawer(PlayerMovement player, Map map);
    void playerDrawer();
    void mapDrawer();
    void duggedDrawer();

    private:
    PlayerMovement player_;
    Map map_;
    Vector2 playerSize_ = {40,40};

};