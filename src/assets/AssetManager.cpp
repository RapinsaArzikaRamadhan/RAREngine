#include "assets/AssetManager.h"
#include <raylib.h>
#include <iostream>

AssetManager::AssetManager()
{

}

bool AssetManager::LoadTexture(
    const std::string& name,
    const std::string& path
)
{
    RTexture texture;

    if(texture.Load(path))
    {
        textures[name] = texture;
        return true;
    }
    return false;
}

RTexture& AssetManager::GetTexture(
    const std::string& name
)
{
    return textures.at(name);
}

void AssetManager::Init()
{

}

void AssetManager::ShutDown()
{

}