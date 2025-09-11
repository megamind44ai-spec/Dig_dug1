#include "SplashScreen.h"
#include "raylib-cpp.hpp"



SplashScreen::SplashScreen(): splash_("../resources/splash_screen.png"){};

unique_ptr<Mode> SplashScreen::update(){

splash_.Draw(0, 0);
        
   

    if(IsKeyPressed(KEY_ENTER)){

        return make_unique<GameScreen>();
    }




    return nullptr;
}