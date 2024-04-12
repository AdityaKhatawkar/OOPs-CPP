/*
Access can also be given to any specific function in a friend class and not the entire class itself.
*/

#include <iostream>
using namespace std;

class A; // forward declaration of class A

class B // Partial declaration of class A
{
public:
    void func1(A);
    void func2(A);
};

class A // Complete declatation of class A
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
    friend void B::func1(A x); // permission only given to the func1 in class B
};

// void B::func2(A x) //no permission given to the func2 in class B
// {
//     cout << x.a; //cannot access
// }

void B::func1(A x) // permission only given to func1 to access 'a' in class A
{
    cout << x.a;
}

int main()
{
    A obj1;
    B obj2;
    obj2.func1(obj1);
    return 0;
}
