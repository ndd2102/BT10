#include<iostream>
using namespace std;
struct Point
{
    int x,y;
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};
void print(Point &p)
{
    cout << p.x << " " << p.y << " ";
    cout << &p << endl;
}
void print_val(Point p)
{
    cout << p.x << " " << p.y <<" ";
    cout << &p << endl;
}
int main()
{
    Point p(3 ,4);
    print (p);
    print_val(p);
}
