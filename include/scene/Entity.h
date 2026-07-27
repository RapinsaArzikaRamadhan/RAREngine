#ifndef ENTITY_H
#define ENTITY_H

#include "scene/RTransform.h"
#include "graphics/RMesh.h"
#include "graphics/RMaterial.h"

class Entity
{
public:
    
    Entity();

    RTransform& GetTransform();
    RMaterial& GetMaterial();

    void Update();
    void Draw();

    void SetPrimitive(PrimitiveType type);
private:
    RTransform rtransform;
    RMesh rmesh;  
    RMaterial rmaterial;
};

#endif