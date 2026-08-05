#include "RAREngine/Application.hpp"
#include "RAREngine/Core/Input.hpp"
#include "RAREngine/Core/Time.hpp"
#include <raylib.h>

namespace RAREngine
{

Application::Application()
{ 
    scenemanager.SetScene(
        &menuscene
    );
    TraceLog(LOG_INFO, "%p", scenemanager.GetCurrentScene());
}

Application::~Application()
{ 

}

void Application::Update()
{
    scenemanager.Update();
}

void Application::Render()
{
    scenemanager.Render();
}

}