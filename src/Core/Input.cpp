#include "RAREngine/Core/Input.hpp"
#include <raylib.h>

namespace RAREngine
{
    
bool Input::IsKeyDown(int key)
{
    return ::IsKeyDown(key);
}

bool Input::IsKeyPressed(int key)
{
    return ::IsKeyPressed(key);
}

} // namespace RAREngine
