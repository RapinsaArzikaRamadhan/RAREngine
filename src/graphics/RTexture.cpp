#include "graphics/RTexture.h"

RTexture::RTexture()
{
    texture.id = 0;
}

bool RTexture::Load(
    const std::string& path
)
{
    texture = ::LoadTexture(path.c_str());

    return texture.id != 0;
}

void RTexture::Unload()
{
    if(texture.id != 0)
    {
        ::UnloadTexture(texture);
        texture.id = 0;
    }
}

Texture2D& RTexture::GetNative()
{
    return texture;
}