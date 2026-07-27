#include "graphics/RMesh.h"
#include <raylib.h>

#include "scene/RTransform.h"
#include "graphics/RMaterial.h"

RMesh::RMesh()
{
    primitive = PrimitiveType::Cube;
}

void RMesh::Draw(
    const RTransform& rtransform,
    const RMaterial& rmaterial
)
{
    switch (primitive)
    {
    case PrimitiveType::Cube:
        DrawCube(
            rtransform.position,
            1,
            1,
            1,
            rmaterial.color
        );
    break;

    case PrimitiveType::Sphere:
        DrawSphere(
            rtransform.position,
            0.5f,
            rmaterial.color
        );
    break;

    case PrimitiveType::Cylinder:
        DrawCylinder(
            rtransform.position,
            0.5f,
            0.5f,
            1.0f,
            16,
            rmaterial.color
        );
    break;

    case PrimitiveType::Plane:
        DrawPlane(
            {
                rtransform.position.x,
                rtransform.position.y,
                rtransform.position.z,
            },
            {1,1},
            rmaterial.color
        );
    break;

    }

    if (rmaterial.texture !=nullptr)
    {
        
    } else {

    }
    

}

void RMesh::SetPrimitive(PrimitiveType type)
{
    primitive = type;
}

PrimitiveType RMesh::GetPrimitive() const
{
    return primitive;
}