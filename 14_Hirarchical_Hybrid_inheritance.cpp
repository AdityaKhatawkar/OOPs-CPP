/*
One class serves as parent class for more than one class

derived 1 <-----base-----> derived 2

When more than one type of inheritance is used, it is called 
hybrid inheritance.

derived 1 <-----base-----> derived 2 <----- base2

*/

#include <iostream>
using namespace std;

// Hirarchical inheritance

class A
{
public:
    void func1()
    {
        cout << "inside function one" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "inside function two" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "inside function three" << endl;
    }
};

class D : public C // hybrid inheritance
{
public:
    void func4()
    {
        cout << "inside function four " << endl;
    }
};

int
main()
{
    A obj1;
    B obj2;
    C obj3;
    D obj4;

    obj1.func1();
    obj2.func1();
    obj2.func2();
    obj3.func1();
    obj3.func3();
    obj4.func3();
    obj4.func1();

    return 0;
}
