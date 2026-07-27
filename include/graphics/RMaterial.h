#ifndef RMATERIAL_H
#define RMATERIAL_H

#include <raylib.h>
#include "graphics/RTexture.h"

class RMaterial
{
public:
    RMaterial();

    Color color;
    Texture2D* texture = nullptr;

    void SetTexture(Texture2D* tex);
    RTexture* GetTexture();
private:
    RTexture* texture = nullptr;
};

#endif