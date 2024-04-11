/*
Ambiguity is caused when a class inherits from two or more classes and those base classes have functions with same name.
To resolve this, Scope resolution operators are used.
*/

#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "This is class A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "This is class B" << endl;
    }
};

class C : public A, public B
{
public:
    void func()
    {
        cout << "This is class C" << endl;
    }
};

int main()
{
    C obj;
    // obj.func(); // will give error that func is ambiguous, if func is also in class C, error will be gone and func in C
                   // will be executed by default.
    obj.A::func();
    obj.B::func();
    return 0;
}
