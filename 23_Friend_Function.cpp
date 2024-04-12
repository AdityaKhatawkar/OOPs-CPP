/* 
Syntax: 
friend <function definition>;

Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/

#include <iostream>
using namespace std;

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

    friend void func1(A x); // Giving permission to the function named func1 to access its data members.
};

void func1(A x) // friend function accessing a private member from class A
{
    cout << x.a;
}

int main()
{
    A obj1;
    func1(obj1);
    return 0;
}
