#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <unordered_map>
#include <string>
#include <graphics/RTexture.h>

class AssetManager
{
public:
    AssetManager();
    void Init();
    void ShutDown();

    bool LoadTexture(
        const std::string& name,
        const std::string& path
    );

    RTexture& GetTexture(
        const std::string& name
    );

private:
    std::unordered_map<std::string, RTexture> textures;
};

#endif
