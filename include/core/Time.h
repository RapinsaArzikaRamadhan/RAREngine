#ifndef TIME_H
#define TIME_H

class Time 
{
public:
    void Update();

    float GetFrameTime() const;
    float GetElapsedTime() const;

private:
    float deltaTime = 0.0f;
    float elapsedTime = 0.0f;
};

#endif