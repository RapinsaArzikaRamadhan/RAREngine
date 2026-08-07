#include "RAREngine/Scene/DummyScene.hpp"
#include "RAREngine/Core/Input.hpp"
#include <raylib.h>

namespace RAREngine
{
DummyScene::DummyScene()
{

}

DummyScene::~DummyScene()
{

}

void DummyScene::Update()
{
    if (Input::IsKeyPressed(KEY_SPACE))
    {
        TraceLog(LOG_INFO, "GAME STARTED");
    };
}

void DummyScene::Render()
{
        DrawText(
        "this is the dummy realm",
        350,
        150,
        30,
        RED
    );

    DrawText(
    "Press ` to back to menuscene",
    450,
    200,
    10,
    RED
    );
}
} // namespace RAREngine
