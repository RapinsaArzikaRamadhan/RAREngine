#include "RAREngine/Core/Engine.hpp"
#include "RAREngine/Core/Config.hpp"
#include <raylib.h>

namespace RAREngine
{

float testX =0;
 
Engine::Engine()
{
    Config::Load(
        "config/engine.rarconf"
    );

    InitWindow(
        Config::GetInt("Window.width"),
        Config::GetInt("Window.height"),
        Config::GetString("Window.title").c_str()
    );

    SetTargetFPS(
        Config::GetInt("Engine.target_fps")
    );
}

Engine::~Engine()
{
    CloseWindow();
}

void Engine::Run()
{
    while (!WindowShouldClose())
    {
        Time::Update();
        Update();
        Render();
    }
    
}

void Engine::Update()
{
    testX += 100 *Time::GetDeltaTime();
}

void Engine::Render()
{
    renderer.BeginFrame();

    renderer.Clear();

    DrawRectangle(
        testX,
        150,
        50,
        50,
        RED
    );

    DrawText(
        "RAREngine Running",
        10,
        30,
        30,
        WHITE
    );

    DrawText(
        TextFormat(
        "Delta Time: %.5f",
        Time::GetDeltaTime()
        ),
        10,
        60,
        10,
        WHITE
    );
    
    DrawFPS(
        10,
        10
    );
    renderer.EndFrame();
}

}