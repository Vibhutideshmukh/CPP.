4. Display sum of two integer values, sum of two float values, two char values using constructor overloading.
 
#include <iostream>
using namespace std;

class A{
    public:
        A(int x,int y)
        {
            cout<<"sum : "<<x+y<<endl;
        }
        A(double x,double y)
        {
            cout<<"sum : "<<x+y<<endl;
        }
        A(string x,string y)
        {
            cout<<"sum : "<<x+y<<endl;
        }
};
int main() {
    
    A oa1(5,8);
    A oa2(5.6,2.4);
    A oa3("c","++");

    return 0;
}