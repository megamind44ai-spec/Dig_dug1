#include "SplashScreen.h"
#include "GameScreen.h"

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 900;

int main()
{
    raylib::Window window(SCREEN_WIDTH, SCREEN_HEIGHT, "Dig Dug!");
    SetTargetFPS(60);
    SplashScreen screen;
    GameScreen game;
    bool isGameScreen = false;
    

while (!window.ShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        if(IsKeyPressed(KEY_ENTER)){isGameScreen = true;}

        if(!isGameScreen){

            screen.drawSplashScreen();
        }

        else{game.playGame();}



            EndDrawing();

}





    return 0;
}