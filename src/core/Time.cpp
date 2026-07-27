#include "core/Time.h"
#include <raylib.h>

void Time::Update()
{
    deltaTime = GetFrameTime();
    elapsedTime = GetTime();
}

float Time::GetElapsedTime() const
{
    return deltaTime;
}

float Time::GetFrameTime() const
{
    return elapsedTime;
}