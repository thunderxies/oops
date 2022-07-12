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
        return 2*(length*breadth);
    }

};
int main()
{
    rectangle r;
    rectangle *p;
    p->length=10;
    p->breadth=10;
    cout<<"pointer length and breadth is "<<p->area()<<endl;
return 0;
}