/*
Multiple inheritance:
A class inherits from multiple different classes.

base 1 ----> derived <----- base 2

*/

#include <iostream>
using namespace std;

class animal
{

public:
    int age;
    int weight;

    void bark()
    {
        cout << "barking" << endl;
    }
};

class human
{
public:
    string color;

    void speak()
    {
        cout << "speaking" << endl;
    }
};

// multiple inheritance
class hybrid : public animal, public human
{
public:
    void speakAndBark()
    {
        cout << "Speaking and Barking" << endl;
    }
};

int main()
{
    hybrid obj1;
    obj1.speak();
    obj1.bark();
    obj1.speakAndBark();

    return 0;
}
