#include "Game.h"
#include <raylib.h>

Game::Game()
{

};

Game::~Game()
{

};

void Game::Init()
{
    window.Init();
    camera.Init();
    
    assetmanager.Init();
    assetmanager.LoadTexture(
        "grass",
        "../assets/grass.png"
    );

    scene.Init();
};

void Game::Update()
{
    if (IsKeyPressed(KEY_APOSTROPHE))
    {
        cameraEnabled = !cameraEnabled;

        if (cameraEnabled)
        {
            DisableCursor();
        } else {
            EnableCursor();
        }
        
    }

    if (cameraEnabled)
    {
        camera.Update();
    }

    time.Update();
    input.Update();
    scene.Update();
    
};

void Game::Draw()
{
    renderer.Begin(camera.GetCamera());
    scene.Draw();

    EndMode3D();

    DrawText(TextFormat("Fps : %i", GetFPS()),10,10,20,RED);    

    EndDrawing();
};

void Game::Shutdown()
{
    window.Shutdown();
    assetmanager.ShutDown();
};

void Game::Run()
{
    Init();

    while (!window.ShouldClose())
    {
        Update();
        Draw();
    };
    Shutdown();
};
