#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    char level;
};

int main()
{
    hero H;
    H.level = 'A';
    cout << H.level << endl;
    return 0;
}