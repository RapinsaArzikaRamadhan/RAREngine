#include "RAREngine/Core/Config.hpp"
#include <fstream>
#include <iostream>

namespace RAREngine
{

std::unordered_map<std::string, std::string> Config::values;

bool Config::Load(const std::string& path)
{
    std::ifstream file(path);

    if (!file.is_open())
    {
        std::cout << "failed to load the config\n";
        return false;
    }

    std::string line;
    std::string section;

    while (std::getline(file, line))
    {

        //ini artinya kalau kosong skip baris
        if (line.empty() || line[0] == '#')
        {
            continue;
        }

        //ini baca section nih
        if (line[0] == '[')
        {
            section = line.substr(
                1,
                line.find(']') -1
            );

            continue;
        }

        //ini artinya baca key=value
        size_t separator = line.find('=');

        if (separator != std::string::npos)
        {
            std::string key =
                line.substr(0, separator);

            std::string value =
                line.substr(separator + 1);

            values[
                section +  "." + key
            ] = value;
        }        
    }

    for (auto& pair : values)
    {
        std::cout   
            << pair.first
            << " = "
            << pair.second
            << std::endl;
    }
    
    return true;
    
    
}

std::string Config::GetString(
    const std::string& key
)
{
    return values[key];
}

int Config::GetInt(
    const std::string& key
)
{

    std::cout
        << "GetInt Request: "
        << key
        << " value : "
        << values[key]
        << std::endl;

    return std::stoi(
        values[key]
    );
}

bool Config::GetBool(
    const std::string& key
)
{
    return values[key] == "true";
}

}