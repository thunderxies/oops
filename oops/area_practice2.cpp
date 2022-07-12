#include<stdio.h>
#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    //  rectangle()
    // {
    //     length=1;
    //     breadth=1;
    // }

    //default argumented constructor yahi likhna sahi rahta hai
    rectangle(int l=1,int b=1)
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }

     void setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        length=0;
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
    int getLength()
    {
        return length;
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
    rectangle r(10,5);//parameterrized constructor mein jaaega
    rectangle r2(r);    
    cout<<r.area()<<endl;                  //value set nai kiye hai toh garbage value aaya.
   cout<<r2.area()<<endl;
    // r.setLength(4);
    // r.setBreadth(2);
    // cout<<"area is "<<r.area();
    return 0;
}