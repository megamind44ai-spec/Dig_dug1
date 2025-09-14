#include "SplashScreen.h"
#include "raylib-cpp.hpp"



SplashScreen::SplashScreen(): splash_("../resources/splash_screen.png"){};

void SplashScreen::drawSplashScreen(){

splash_.Draw(0, 0);
        
}