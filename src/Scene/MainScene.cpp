#include "RAREngine/Scene/MainScene.hpp"
#include "RAREngine/Scene/SceneManager.hpp"
#include "RAREngine/Core/Input.hpp"
#include <raylib.h>

namespace RAREngine
{
MainScene::MainScene()
{

}

MainScene::~MainScene()
{

}

void MainScene::Update()
{
    if (Input::IsKeyPressed(KEY_SPACE))
    {
        TraceLog(LOG_INFO, "YOU ARE IN THE DUMMY SCENE");
    };

    if (Input::IsKeyPressed(KEY_GRAVE))
    {
        sceneManager->SetScene(SceneID::Menu);
    };

}

void MainScene::Render()
{
    DrawText(
    "Welcome to the MainScene",
    350,
    150,
    30,
    YELLOW
    );

    DrawText(
    "Press ` to back to menuscene and 2 to go to the dummy scene",
    450,
    200,
    10,
    YELLOW
    );
}
} // namespace RAREngine
