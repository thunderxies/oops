#include<iostream>
using namespace std;
class rectangle{
public:
int length;
int breadth;
int area()
{
    return length*breadth;
}
int perimeter()
{
    
    return 2*(length+breadth);
}

};
int main()
{
    rectangle r1,r2;
    r1.length=10;
    r2.breadth=9;
    cout<<"area is"<<r1.area();
    return 0;
}