/* Getter and setter functions are used to access the items in private scope of the code from outside the class. The functions are called from outside the class and are
defined in the public scope of the class */

#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
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
