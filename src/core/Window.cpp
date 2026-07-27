#include "core/Window.h"
#include <raylib.h>

void Window::Init()
{
    InitWindow(800,450,"RAREngine");
    SetTargetFPS(30);

    DisableCursor();
}

void Window::Shutdown()
{
    CloseWindow();
}

bool Window::ShouldClose()
{
    return WindowShouldClose();
}