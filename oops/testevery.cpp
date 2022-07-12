#include<iostream>
#include<stdio.h>
using namespace std;
class base
{
    public:
        int a;
        void display()
        {
            cout << "Display of base" <<a<< endl;
    }

};
class derived:public base{
    public:
    void show()
    {
        
        cout << "show of derived" << endl;
    }
};
int main()
{
    derived d;
    d.a = 100;
    d.display();
    d.show();
    return 0;
}