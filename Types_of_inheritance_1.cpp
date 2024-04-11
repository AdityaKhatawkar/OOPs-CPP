/*
Single inheritance:
Only one derived class inherits from one base class.

base class ------> derived class

Multilevel inheritance:
The derived class from base class is inherited by some other class.

base class -----> derived class 1 --------> derived class 2

*/

#include <iostream>
using namespace std;

class animal
{

public:
    int age;
    int weight;

    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class dog : public animal
{
};

class germanShepard : public dog
{
};

int main()
{
    // dog d;
    // d.speak();

    germanShepard G;
    G.speak();

    return 0;
}
