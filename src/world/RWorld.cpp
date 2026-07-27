#include "world/RWorld.h"
#include "raylib.h"
#include <iostream>

RWorld::RWorld()
{

}

void RWorld::Update()
{

}

void RWorld::Init()
{
    std::cout << "world dibuat!\n";
}

void RWorld::Draw()
{
    DrawPlane(
        {0,0,0},
        {20,20},
        GREEN
    );

    DrawGrid(
        20,
        1
    );   
} 