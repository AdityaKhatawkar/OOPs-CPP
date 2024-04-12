#include <iostream>
using namespace std;


class emp
{
    int id;
    int salary;

public:
    void setId(int n)
    {
        salary = 500;
        this -> id = n;
    }

    void getId()
    {
        cout << "The id of this employee is " << this->id << endl;
    }
};

int main()
{
    emp a[3];
    for (int i = 0; i<3;i++){
        a[i].setId(rand());
        a[i].getId();
    }


    return 0;
}
