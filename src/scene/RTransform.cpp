#include "scene/RTransform.h"
#include <raylib.h>

RTransform::RTransform()
{
    position = {0.0f, 0.0f, 0.0f};
    rotation = {0.0f, 0.0f, 0.0f};
    scale = {1.0f, 1.0f, 1.0f};
}