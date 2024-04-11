/*
Also called dynamic polymorphism.
Method overriding.
Rules:
- Method of parent class and child class must have the same name.
- Method of patent and child class must have same parameters.
- Only possible through inheritance.

used when for example a class inherits 10 methods from another class, if it only has 8 methods that match with the base class, we can method override the other two methods
as required by the derived class.
*/

#include <iostream>
using namespace std;

class animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    dog obj;
    animal obj2;
    obj.speak();
    obj2.speak();
    return 0;
}
