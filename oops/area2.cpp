#include<iostream>
using namespace std;

class rectangle 
{
    private:
    int length;
    int breadth;

    public:
   void setLength(int l) //int isliye kyuki vakue return ho raha hai
   {    if(l<0)
   length=1;
   else
      length=l;

   }
   void setBreadth(int b)
   {
    if(b<0)
    breadth=1;
    else
    breadth=b;
   }
   int getBreadth(int b)
   { 
    
    return breadth;
    }
   int getLength(int l)
   {
    if(l<0)
    {
    length=1;
    }
    else l= 0;
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
    rectangle r1;
    r1.setLength(-10);
    r1.setBreadth(-7);
    cout<<"area is "<<r1.area()<<endl;
    cout<<"perimeter is "<<r1.perimeter()<<endl;
    return 0;
}