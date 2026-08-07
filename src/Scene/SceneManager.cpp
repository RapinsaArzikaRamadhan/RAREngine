#include "RAREngine/Scene/SceneManager.hpp"
#include <raylib.h>

namespace RAREngine
{
void SceneManager::SetScene(SceneID id)
{
    switch (id)
    {
    case SceneID::Menu:
        currentScene = &menuScene;
        break;
    case SceneID::Dummy:
        currentScene = &dummyScene;
        break;
    }

    currentScene->SetSceneManager(this);
    TraceLog(LOG_INFO, "%p", currentScene);

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
