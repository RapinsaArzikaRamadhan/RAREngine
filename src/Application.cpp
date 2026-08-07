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

    if (Input::IsKeyPressed(KEY_ONE))
    {
        sceneManager.SetScene(SceneID::Dummy);
    };

    if (Input::IsKeyPressed(KEY_GRAVE))
    {
        sceneManager.SetScene(SceneID::Menu);
    };
}

void Application::Render()
{
    sceneManager.Render();
}

}