/*
We can change the function of operators from their standard operations to some other thing.

syntax:
return_type operator<operator> (){
    operation it will do;
}

*/

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(A &ob)
    {
        // int v1 = this->a;
        // int v2 = ob.a;
        // cout << "Output : " << v2 - v1 << endl;

        cout << "Hello " << endl;
    }

    void operator() (){
        cout << "Brackets used "<< this->a << endl;
    }
};

int main()
{
    A obj1, obj2;
    obj1.a = 1;
    obj2.a = 2;
    obj1 + obj2;
    obj1();

    return 0;
}
