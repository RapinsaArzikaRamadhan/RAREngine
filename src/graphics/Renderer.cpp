#include "graphics/Renderer.h"

void Renderer::Begin(const Camera3D& camera)
{
    BeginDrawing();

    ClearBackground(SKYBLUE);

    BeginMode3D(camera);
}

void Renderer::End()
{
    EndMode3D();
    EndDrawing();
}