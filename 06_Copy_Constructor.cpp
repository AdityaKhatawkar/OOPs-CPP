/*If & is not used, temp becomes a copy of H, temp calls the copy constructor and we get stuck in a loop. Therefore we use
pass by reference and use & which will not create a copy and temp and H are the same objects.*/

#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    hero(int h)
    {
        this->health = h;
    }

    char level;

    hero(hero &temp)
    {
        cout << "copy constructor called<<" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Level is : " << level << endl;
        cout << "Health is : " << health << endl;
    }
};

int main()
{
    hero H(80);
    H.level = 'A';
    H.print();

    // copy constructor
    hero cp(H);
    cp.print();

    return 0;
}
