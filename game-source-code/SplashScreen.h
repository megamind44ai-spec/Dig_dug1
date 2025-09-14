#pragma once

#include "raylib-cpp.hpp"

class SplashScreen{

    public:
    SplashScreen();
    void drawSplashScreen ();


    private:
    raylib::Texture2D splash_;


};