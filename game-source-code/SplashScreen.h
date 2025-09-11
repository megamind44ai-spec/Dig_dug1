#pragma once
#include "Mode.h"
#include "GameScreen.h"

class SplashScreen: public Mode{

    public:
    SplashScreen();
    unique_ptr<Mode> update() override;


    private:
    raylib::Texture2D splash_;


};