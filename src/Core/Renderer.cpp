#include "RAREngine/Core/Renderer.hpp"
#include <raylib.h>

namespace RAREngine
{

Renderer::Renderer()
{

};

Renderer::~Renderer()
{

};

void Renderer::BeginFrame()
{
    BeginDrawing();
};

void Renderer::EndFrame()
{
    EndDrawing();
};

void Renderer::Clear()
{
    ClearBackground(BLACK);
};

}