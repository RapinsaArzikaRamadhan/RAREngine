#include <raylib.h>

int main()
{
    InitWindow(1280,720, "RAREngine");
    SetTargetFPS(0);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("RAREngine", 20, 20, 20, GREEN);
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}