#include "scene/Entity.h"
#include <raylib.h>
#include <iostream>
#include "scene/RTransform.h"

Entity::Entity()
{
    std::cout << "Entitiy di buat!\n" << std::endl;
}

void Entity::Update()
{

}

void Entity::Draw()
{
    rmesh.Draw(rtransform, rmaterial);
}

RTransform& Entity::GetTransform()
{
    return rtransform;
}

RMaterial& Entity::GetMaterial()
{
    return rmaterial;
}

void Entity::SetPrimitive(PrimitiveType type)
{
    rmesh.SetPrimitive(type);
}