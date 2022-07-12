#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength()
    {
        return length;
    } // inline
    int getBreadth()
    {
        return breadth;
    } // inline
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    int GetHeight() { return height; }
    void setHeight()(int h) { height = h; }
    int volume() { return length * breadth * height; }
};
int main()
{
    rectangle r(10, 10);
    cout << "area is " << r.area() << endl;
    if (r.isSquare())
        cout << "true" << endl;
    return 0;
}
rectangle::rectangle()
{
    length = 1;
    breadth = 1;
}
rectangle::rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}
rectangle::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void rectangle::setLength(int l)
{
    if (l >= 0)
        length = l;
    else
        length = 0;
}
void rectangle::setBreadth(int b)
{
    if (b >= 0)
        breadth = b;
    else
        breadth = 0;
}

int rectangle::area()
{
    return length * breadth;
}
int rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool rectangle::isSquare()
{
    return length == breadth;
}
rectangle::~rectangle()
{
    cout << "rectangle destroyed";
}
