#include "graphics/CameraController.h"
#include <raylib.h>

void CameraController::Init()
{
    camera.position = {4.0f, 4.0f, 4.0f};
    camera.target = {0.0f, 0.0f, 0.0f};
    camera.up = {0.0f, 1.0f, 0.0f};
    camera.fovy = {45.0f};
    camera.projection = CAMERA_PERSPECTIVE;
};

void CameraController::Update()
{
    UpdateCamera(&camera, CAMERA_FREE);
}

Camera3D CameraController::GetCamera() const
{
    return camera;
}