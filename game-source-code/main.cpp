#include "SplashScreen.h"

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 900;

int main()
{
    raylib::Window window(SCREEN_WIDTH, SCREEN_HEIGHT, "Dig Dug!");
    SetTargetFPS(60);
    

    unique_ptr<Mode> mode = std::make_unique<SplashScreen>();


while (!window.ShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);


           if (auto next = mode->update()) {
                mode = std::move(next);
            }



            EndDrawing();

}





    return 0;
}