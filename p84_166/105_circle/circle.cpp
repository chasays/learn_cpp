
#include "circle.h"


void Circle::setCircleCenter(Point p)
{
    m_center = p;
}
Point Circle::getCircleCenter()
{
    return m_center;
}
void Circle::setR(int r)
{
    m_R = r;
}
int Circle::getR()
{
    return m_R;
}