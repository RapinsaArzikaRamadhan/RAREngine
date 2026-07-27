#ifndef INPUT_H
#define INPUT_H

#include <raylib.h>

class Input
{
public:
    
    void Update();

    bool KeyDown(int key);
    bool KeyPressed(int key);

    Vector2 MouseDelta();
};

#endif