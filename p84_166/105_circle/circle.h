#pragma once
#include <iostream>
#include <string>
#include "point.h"

using namespace std;

Circle
{
public:
    void setCircleCenter(Point p);
    Point getCircleCenter();
    void setR(int r);
    int getR();
private:
    int m_R;
    Point m_center;
};