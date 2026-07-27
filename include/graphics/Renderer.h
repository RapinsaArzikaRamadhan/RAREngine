#ifndef RENDERER_H
#define RENDERER_H

#include <raylib.h>

class Renderer
{
public: 
    void Begin(const Camera3D& camera);
    void End();
};

#endif