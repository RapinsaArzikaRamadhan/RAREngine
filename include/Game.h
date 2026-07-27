#ifndef GAME_H
#define GAME_H

#include "core/Window.h"
#include "core/Time.h"
#include "core/Input.h"
#include "graphics/CameraController.h"
#include "graphics/Renderer.h"
#include "scene/Scene.h"
#include "scene/Entity.h"
#include "scene/RTransform.h"
#include "graphics/RMesh.h"
#include "world/RWorld.h"
#include "assets/AssetManager.h"

class Game
{
public :
    Game();
    ~Game();

    void Run();

private :
    void Init();
    void Update();
    void Draw();
    void Shutdown();

    bool running;

    CameraController camera;
    Window window;
    Renderer renderer;
    Time time;
    Input input;
    Scene scene;
    //Entity entity;
    //EntityTransform entitytransform;
    //RMesh rmesh;
    RWorld world;
    AssetManager assetmanager;

    bool cameraEnabled = true;
};

#endif