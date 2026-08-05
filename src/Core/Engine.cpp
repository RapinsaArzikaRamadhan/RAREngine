#include "RAREngine/Core/Engine.hpp"
#include "RAREngine/Core/Config.hpp"
#include "RAREngine/Application.hpp"
#include <raylib.h>

namespace RAREngine
{
 
Engine::Engine()
{
    Config::Load(
        "config/engine.rarconf"
    );

    InitWindow(
        Config::GetInt("Window.width", 600),
        Config::GetInt("Window.height", 400),
        Config::GetString("Window.title", "RARTest").c_str()
    );

    SetTargetFPS(
        Config::GetInt("Engine.target_fps", 24)
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
    application.Update();
}

void Engine::Render()
{
    renderer.BeginFrame();

    renderer.Clear();

    application.Render();
    
    renderer.EndFrame();
}

}