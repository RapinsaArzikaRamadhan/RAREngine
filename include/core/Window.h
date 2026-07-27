#ifndef WINDOW_H
#define WINDOW_H

class Window 
{
public:
    void Init();
    void Shutdown();

    bool ShouldClose();
};

#endif