7. Display the sum of two numbers using multiple inheritance where one number is declared in first base class and one number declared in second base class. Function is defined in the 
derived class to sum two numbers.

#include<iostream>
using namespace std;

class A{
    public:
     int x;
};
class B{
    public:
     int y;
};
class C:public A:public B{
    public:
    void display()
    {
        x=5;
        y=10;
        cout<<x+y;
    }
};

int main()
{
    C ob;
    ob.display();
}