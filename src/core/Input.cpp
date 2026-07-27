#include "core/Input.h"
#include <raylib.h>

void Input::Update()
{

}

bool Input::KeyDown(int key)
{
    return IsKeyDown(key);
}

bool Input::KeyPressed(int key)
{
    return IsKeyPressed(key);
}

Vector2 Input::MouseDelta()
{
    return GetMouseDelta();
}