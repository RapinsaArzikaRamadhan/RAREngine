#include "RAREngine/Core/Engine.hpp"
#include <raylib.h>

namespace RAREngine{
 
Engine::Engine()
{

    InitWindow(
        600,
        400,
        "RAREngine"
    );

    SetTargetFPS(0);
};

Engine::~Engine()
{
    CloseWindow();
};

void Engine::Run()
{
    while (!WindowShouldClose())
    {
        Update();
        Render();
    }
    
};

void Engine::Update()
{

};

void Engine::Render()
{
    renderer.BeginFrame();

    renderer.Clear();

    ClearBackground(BLACK);

    DrawText(
        "RAREngine Running",
        100,
        100,
        30,
        WHITE
    );
    
    DrawFPS(
        10,
        10
    );
    renderer.EndFrame();
};

}