#ifndef RTEXTURE_H
#define RTEXTURE_H

#include <raylib.h>
#include <string>

class RTexture
{
public: 
    RTexture();

    bool Load(const std::string& path);
    void Unload();

    Texture2D& GetNative();

private:
    Texture2D texture;

};

#endif