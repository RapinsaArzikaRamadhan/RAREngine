#ifndef SCENE_H
#define SCENE_H

#include <raylib.h>
#include <vector>

#include "scene/Entity.h"
#include "world/RWorld.h"

class Scene
{
public:
    void Update();
    void Init();
    void Draw();

    void Shutdown();

private:
    std::vector<Entity> entities;
    RWorld world;
};

#endif