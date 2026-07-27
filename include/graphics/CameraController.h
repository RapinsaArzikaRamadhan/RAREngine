#ifndef CAMERA_CONTROLLER_H
#define CAMERA_CONTROLLER_H

#include <raylib.h>

class CameraController
{
public:
    void Init();
    void Update();

    Camera3D GetCamera() const;

private:
    Camera3D camera;
};

#endif