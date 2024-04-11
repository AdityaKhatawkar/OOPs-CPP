/*
Two functions having the same name but different argumenrs types is called function overloading or polymorphism.
The function is not overloaded if they just differ in their return types and not their arguments.
*/


#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Aditya" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hi " << name << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("Aditya");
    return 0;
}
