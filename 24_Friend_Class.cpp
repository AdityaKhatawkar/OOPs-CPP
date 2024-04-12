/*
Friend classes are those classes that have permission to access private members of the class in which they are declared.
Forward declaration hints to the compiler that this class is declared somewhere forward in the code.
*/

#include <iostream>
using namespace std;

class B; // forward declaration

class A
{
    int a;

public:
    A()
    {
        a = 10;
    }

    void show()
    {
        cout << a;
    }

    friend B;
};

class B //has access to the data member 'a' which is declared in class A
{
public:
    void func1(A x)
    {
        cout << x.a;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj2.func1(obj1);
    return 0;
}
