#include "scene/Scene.h"
#include <raylib.h>

#include "scene/Entity.h"
#include "scene/RTransform.h"


void Scene::Init()
{
    world.Init();

    Entity entity1;
    entity1.GetTransform().position={5,0.5f,3};
    entity1.GetMaterial().color = BLUE;
    entity1.SetPrimitive(PrimitiveType::Sphere);
    entities.push_back(entity1);

    Entity entity2;
    entity2.GetTransform().position={-2,0.5f,-4};
    entity2.GetMaterial().color = RED;
    entity2.SetPrimitive(PrimitiveType::Cylinder);
    entities.push_back(entity2);

    Entity entity3;
    entity3.GetTransform().position = {0,0.5f,5};
    entity3.GetMaterial().color = GREEN;
    entity3.SetPrimitive(PrimitiveType::Cube);
    entities.push_back(entity3);
}

void Scene::Update()
{
    world.Update();

    for (auto& entity : entities)
    {
        entity.Update();
    }
}

void Scene::Draw()
{
    world.Draw();

    for (auto& entity : entities)
    {
        entity.Draw();
    }
    
}

void Scene::Shutdown()
{
    
}