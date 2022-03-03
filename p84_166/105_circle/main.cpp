#include "circle.h"

void isInside(Circle &c, Point &p)
{
    rDistance = (c.getCircleCenter.getX() - p.getX) * (c.getCircleCenter.getX() - p.getX) + 
    (c.getCircleCenter.getY() - p.getY()) * (c.getCircleCenter.getY() - p.getY())
    r_circle = c.getR() * c.getR();

    if (rDistance > r_circle)
    {
        cout << "outside" << endl;
    }
    else if(rDistance == r_circle)
    {
        cout << "online" << endl;
    }
    else
    {
        cout << "inside" << endl;
    }
}


int main()
{
    Circle c1;
    Point p;
    p.setX(10);
    p.setY(0);
    c1.setCircleCenter(p);

    Point p1;
    p1.setX(10);
    p1.setY(11);
    isInside(c1,p1);

    return 0;
}
