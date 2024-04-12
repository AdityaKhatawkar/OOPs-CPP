/*
We can partially define a class with function definitions but we can write the function itself outside the class using scope 
resolution operators.
*/


#include <iostream>
using namespace std;

class A
{
    int a = 10;

public:
    void print();
    void hello();
};

void A::hello(){
    cout <<"Hello! " << a <<endl;
}

void A::print()
{   
    hello();
    cout << "Value of a is: " << a << endl;
}

int main()
{
    A obj;
    obj.print();
    return 0;
}
