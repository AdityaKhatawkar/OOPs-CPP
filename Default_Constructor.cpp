/* A constructor is a function within the class that has no return type and has the same name as the class, it is called when an object is created, if the function is not 
manually created, the hidden default constructor is called by default which takes no arguments. */

#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:

    hero(){ //constructor
        cout<<"Default constructor called."<<endl;
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
    hero H;
    H.level = 'A';

    H.setHealth(100);
    cout << "Level is : " << H.level << endl;
    cout << "Health is : " << H.getHealth() << endl;
    return 0;
}
