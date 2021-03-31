#include<iostream>
using namespace std;
struct Point
{
    double x,y;
    Point(const double _x, const double _y)
    {
        x = _x;
        y = _y;
    }
};
void mid_point(Point p1, Point p2)
{
    Point p3(0 ,0);
    p3.x = (p1.x + p2.x)/2;
    p3.y = (p1.y + p2.y)/2;
    cout << p3.x << " " << p3.y;
}
int main ()
{
    Point p1(3,4);
    Point p2(8,6);
    mid_point(p1,p2);
}
