/*The default copy constructor uses shallow copy, which means the memory is shared between the two objects and any change in 
an attribute of one object will result in the change reflecting in the other object too, whereas in deep copy, a whole different
memory is allocated for the new object created using copy constructor*/


#include <iostream>
#include <string.h>
using namespace std;

class hero
{
private:
    int health;

public:
    char level;
    char *name;

    hero()
    {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    hero(int h)
    {
        this->health = h;
    }

    hero(hero &temp)
    {
        cout << "copy constructor called<<" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }
};

int main()
{
    hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    // hero1.print();

    // use default copy constructor

    hero hero2(hero1);
    // hero2.print();
    //    Hero hero2 = hero1;

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    hero1 = hero2;

    hero1.print();

    hero2.print();

    return 0;
}
