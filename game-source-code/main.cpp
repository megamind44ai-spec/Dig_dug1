#include "SplashScreen.h"

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 900;

int main()
{
    raylib::Window window(SCREEN_WIDTH, SCREEN_HEIGHT, "Dig Dug!");
    SetTargetFPS(60);
    

while (!window.ShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);


            EndDrawing();

}





    return 0;
}