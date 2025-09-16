#include "SplashScreen.h"
#include "GameScreen.h"



int main()
{
    raylib::Window window(SCREEN_WIDTH, SCREEN_HEIGHT, "Dig Dug!");
    SetTargetFPS(60);
    SplashScreen screen;
    GameScreen game;
    bool isGameScreen = false;
    

while (!window.ShouldClose()){
        BeginDrawing();
        ClearBackground(DARKBLUE);
        if(IsKeyPressed(KEY_ENTER)){isGameScreen = true;}

        if(!isGameScreen){

            screen.drawSplashScreen();
        }

        else{game.playGame();}



            EndDrawing();

}





    return 0;
}