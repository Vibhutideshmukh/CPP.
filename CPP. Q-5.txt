5. Display the product of two numbers using single inheritance where numbers are declared inside the base class. Function of product both numbers defined in the derived class.

#include<iostream>
using namespace std;

class A{
    public:
    int x;
    int y;
};
class B:public A{
    public:
    void display()
    {
        x=5;
        y=6;
        cout<<x*y;
    }
};

int main ()
{
    B ob;
    ob.display();
    return 0;
}