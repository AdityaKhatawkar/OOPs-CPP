/* here b is the object that is created dynamically, the new operator is used to dynamically allocate memory for objects at runtime. It dynamically allocates 
memory on the heap and returns a pointer to the allocated memory. -> is used for its operations*/


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

    hero *b = new hero;
    b->level = 'B';
    b->setHealth(50);

    cout << "Level is : " << b->level << endl;
    cout << "Health is : " << b->getHealth() << endl;

    return 0;
}
