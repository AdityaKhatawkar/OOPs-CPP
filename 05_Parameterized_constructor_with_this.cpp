/*Parameterized constructor is a constructor that takes some parameters to assign values. The address of the current
object gets stored in "this". The hidden default constructor wont exist anymore once any other constructor is defined. */

#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    hero(int h)
    {
        cout << "this -> " << this << endl;
        this->health = h;
    }

    char level;

    void setHealth(int n)
    {
        health = n;
    }

    int getHealth()
    {
        return health;
    }
};

int main()
{
    hero H(80);
    H.level = 'A';
    cout << "object address: " << &H << endl;

    cout << "Level is : " << H.level << endl;
    cout << "Health is : " << H.getHealth() << endl;
    return 0;
}
