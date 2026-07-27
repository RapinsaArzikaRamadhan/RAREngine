#ifndef MESH_H
#define MESH_H

#include "scene/RTransform.h"
#include "graphics/RMaterial.h"

enum class PrimitiveType
{
    Cube,
    Cylinder,
    Sphere,
    Plane
};

class RMesh
{
public:
    RMesh();

    void Draw(
        const RTransform& rtransform,
        const RMaterial& rmaterial
    );

    void SetPrimitive(PrimitiveType type);
    PrimitiveType GetPrimitive() const;

private:    
    PrimitiveType primitive;
};

#endif 