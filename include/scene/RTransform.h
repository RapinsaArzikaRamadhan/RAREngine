#ifndef TRANSFORM_H
#define TRANSFORM_H
#include <raylib.h>

class RTransform
{
public: 
    Vector3 position;
    Vector3 rotation;
    Vector3 scale;

    RTransform();
};

#endif