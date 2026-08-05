#include "RAREngine/Scene/MenuScene.hpp"
#include "RAREngine/Core/Input.hpp"
#include <raylib.h>

namespace RAREngine
{

MenuScene::MenuScene()
{

}

MenuScene::~MenuScene()
{

}

void MenuScene::Update()
{
    if (Input::IsKeyPressed(KEY_SPACE))
    {
        TraceLog(LOG_INFO, "GAME STARTED");
    };
}

void MenuScene::Render()
{
    DrawText(
        "WANDER PINES",
        350,
        150,
        30,
        WHITE
    );

    DrawText(
    "Press SPACE to start",
    450,
    200,
    10,
    WHITE
    );
    
}


} // namespace RAREngine
