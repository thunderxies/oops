#include<stdio.h>
#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        length=0;

    }
    int getLength()
    {
        return length;
    }
    void setBreadth(int b)
    {
        if(b>=0)
        breadth=b;
        else
        breadth=0;
    }
    int getBreadth()
    {
        return breadth;
    }
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
    rectangle r;
     r.setLength(5);
     r.setBreadth(6);
    cout<<"area is " <<r.area()<<endl;
    cout<<"perimeter is "<<r.perimeter();
    return 0;
}