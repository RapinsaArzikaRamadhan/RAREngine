#include "RAREngine/Scene/SceneManager.hpp"
#include <raylib.h>

namespace RAREngine
{
void SceneManager::SetScene(Scene* scene)
{
    currentScene = scene;
}

void SceneManager::Update()
{
    if (currentScene != nullptr)
    {
        currentScene->Update();
    }
}

void SceneManager::Render()
{
    if (currentScene != nullptr)
    {
        currentScene->Render();
    }
}

Scene* SceneManager::GetCurrentScene()
{
    return currentScene;
}
} // namespace RAREngine
