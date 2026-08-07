#include "RAREngine/Application.hpp"
#include "RAREngine/Core/Input.hpp"
#include "RAREngine/Core/Time.hpp"
#include <raylib.h>

namespace RAREngine
{

Application::Application()
{ 
    sceneManager.SetScene(
        SceneID::Menu
    );
}

Application::~Application()
{ 

}

void Application::Update()
{
    sceneManager.Update();
}

void Application::Render()
{
    sceneManager.Render();
}

}