#include "RAREngine/Core/Time.hpp"
#include <raylib.h>

namespace RAREngine
{

float Time::deltatime = 0.0f;

void Time::Update()
{
    deltatime = GetFrameTime();
}

float Time::GetDeltaTime()
{
    return deltatime;
}

}