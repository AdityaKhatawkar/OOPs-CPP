/*Wrapping up data members and functions into a single entity.
information / data hiding

Fully encapsulated class: all data members are in private scope.


Advantages:
- data hide
- security
- if we want, we can make class "read only"
- code resuability
- unit testing
*/

#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    student first;
    cout << "Encapsulation achieved" << endl;

    return 0;
}
