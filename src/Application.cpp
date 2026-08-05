#include "RAREngine/Application.hpp"
#include "RAREngine/Core/Input.hpp"
#include "RAREngine/Core/Time.hpp"
#include <raylib.h>

namespace RAREngine
{
    
Application::Application()
{ 

}

Application::~Application()
{ 

}

void Application::Update()
{

    menuscene.Update();

}

void Application::Render()
{
    menuscene.Render();
}

}