#include "RAREngine/Application.hpp"
#include "RAREngine/Core/Input.hpp"
#include "RAREngine/Core/Time.hpp"
#include <raylib.h>

namespace RAREngine
{

float testX =0;

Application::Application()
{ 

}

Application::~Application()
{ 

}

void Application::Update()
{

    testX += 100 *Time::GetDeltaTime();

    if (Input::IsKeyPressed(KEY_SPACE))
    {
        TraceLog(LOG_INFO,"Space Pressed");
    }

    if (Input::IsKeyDown(KEY_A))
    {
        TraceLog(LOG_INFO,
            "Delta Time: %.5f",
        Time::GetDeltaTime()    
        );
    }
    
    if (Input::IsKeyDown(KEY_S))
    {
        TraceLog(LOG_INFO,"s Pressed");
    }

    if (Input::IsKeyDown(KEY_W))
    {
        TraceLog(LOG_INFO,"w Pressed");
    }

    if (Input::IsKeyDown(KEY_D))
    {
        TraceLog(LOG_INFO,"d Pressed");
    }

}

void Application::Render()
{
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
}

}