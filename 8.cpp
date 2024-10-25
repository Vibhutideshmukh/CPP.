Q:8:Using hierarchical inheritance where two numbers are declared in base class. Create one function in first derive class and one function in second derive class.First derive class displays the first number with the help of their function and the second derive class displays the second function with the help of their function

#include <iostream>
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
        cout<<x<<endl;
    }
};
class C:public A{
    public:
    void display()
    {
        y=10;
        cout<<y<<endl;
    }
};
    
int main()
{
    B ob1;
    C ob2;
    ob1.display();
    ob2.display();
}