#include "graphics/RMaterial.h"
#include <raylib.h>

RMaterial::RMaterial()
{
    color = WHITE;
}

void RMaterial::SetTexture(Texture2D* tex)
{
    texture = tex;
}