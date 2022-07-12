#include<iostream>
#include<stdio.h>
using namespace std;
class complex
{
private:
    int real;
    int img;
    public:
    complex(int r=0,int i=0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }
        friend complex operator+(complex c1, complex c2);
};
 complex operator+(complex c1,complex c2)
{
    complex t; //why here complex but not int ?
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}
int main()
{
    complex c1(1, 5), c2(3, 1), c3;
    c3 = c1 + c2;
    c3.display();

    return 0;
}