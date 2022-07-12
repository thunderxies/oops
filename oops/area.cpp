#include<iostream>
using namespace std;
class rectangle 
{
    public:
    int length;
    int breadth;

    public:
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
    r2.length=23;
    r1.breadth=10;
    r2.breadth=9;
    cout<<"area is"<<r1.area()<<endl;
    cout<<"area of 2nd rectangle is "<<r2.area()<<endl;
    return 0;
}