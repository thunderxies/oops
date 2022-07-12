#include<iostream>
#include<stdio.h>
using namespace std;
class rectangle
{
    rectangle
    {
        length=1;
        breadth=1;

    }
    rectangle(int l,int b)
    {
    setLength(l);
    setBreadth(b);
    }
    rectangle(rectangle &r){
        length=r.length;
        breadth=b.breadth;
    }

};
int main()
{
    rectangle r(10,5);
    rectangle r2(r);
    cout<<"area is "<<endl;
    return 0;
}