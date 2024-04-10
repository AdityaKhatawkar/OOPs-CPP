/*Used to deallocate the memory
same as class name, no return type or parameters
if the object is statically allocated, destructor is automatically called where as for dynamically created objects, we need to 
manually call the destructor, delete is used to do so.*/

#include <iostream>
using namespace std;

class hero
{
private:
    int health;
    char level;

public:
    hero()
    {
        cout << "Default constructor called." << endl;
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

int main()
{
    hero h1;
    hero *h2 = new hero();
    h1.setHealth(100);
    h1.setlevel('A');
    h2->setHealth(50);
    h2->setlevel('B');
    h1.print();
    h2->print();
    delete h2; // to call destructor manually
    return 0;
}
