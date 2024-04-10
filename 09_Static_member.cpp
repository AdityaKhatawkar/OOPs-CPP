/*static creates a data member that belongs to the class.
there is no need to create an object to access this data member.
is initialized outside the class using a scope resolution operator.

*/

#include <iostream>
using namespace std;

class hero
{
private:
    int health;
    char level;

public:
    static int time;
    hero()
    {
        cout << "Default constructor called." << endl;
        time--;
    }

    void setHealth(int n)
    {
        this->health = n;
    }

    void setlevel(char n)
    {
        this->level = n;
    }

    void print()
    {
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    ~hero()
    {
        cout << "Destructor called." << endl;
    }
};

int hero::time = 10; // initialization of static

int main()
{
    cout << hero::time << endl;

    hero a;
    cout << a.time <<endl;

    hero b;
    cout << b.time <<endl;

    return 0;
}
