#include <stdio.h>
#include "include/raylib.h"

#define YELLOW     (Color){ 253, 249, 0, 255 }     // Yellow

int main () {
    Color amarillo = {34,53,23,255};
    float CircleX, CircleY;
    CircleX = CircleY = 0;

    int SpeedX, SpeedY;
    SpeedX = SpeedY = 100;
 
 
    //SetTargetFPS(60);   

    const char titulo[] = "UCLM QUEST";   
    InitWindow(500, 500, titulo);  // Initialize window and OpenGL context
    float valor;
    while (!WindowShouldClose()) {

        ClearBackground(YELLOW);
        BeginDrawing();
        if (IsKeyDown(65)) { //A
            CircleX -= SpeedX * GetFrameTime(); // GetFrameTime = DeltaTime
        }
        if (IsKeyDown(68)) { //D
            CircleX += SpeedX * GetFrameTime();
        }
        if (IsKeyDown(87)) { //W
            CircleY -= SpeedY  * GetFrameTime();
        }
        if (IsKeyDown(83)) { //S
            CircleY += SpeedY * GetFrameTime();
        }
        DrawCircle(CircleX,CircleY,100,amarillo);
        EndDrawing();

        //printf("%d",GetFPS());
    }

    CloseWindow();        
    return 0;
}