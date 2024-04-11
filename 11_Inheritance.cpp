/*The data members and functions of one class can be accessed by the class that inherits it.

mode of inheritance:
example: age is in public in human superclass, and male subclass is inheriting human in public mode, so age will also be public
in the male subclass.

private data members of any class cannot be inherited.

protected data members can be accessed by the derived class and base class and no where else.

*/


#include <iostream>
using namespace std;

class human
{

public:
    int height;
    int age;
    int weight;

    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class male : public human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
};

int main()
{
    male obj1;
    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    cout << obj1.color << endl;
    obj1.sleep();
    return 0;
}
