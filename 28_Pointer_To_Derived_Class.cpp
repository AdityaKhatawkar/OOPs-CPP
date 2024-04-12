#include <iostream>
using namespace std;

class base
{
public:
    int var1;
    void display()
    {
        cout << "Displaying var1 in base class: " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2;
    void display()
    {
        cout << "Displaying var1 in derived class class: " << var1 << endl;
        cout << "Displaying var2 in derived class: " << var2 << endl;
    }
};

int main()
{
    base *base_ptr; // pointer to base class
    base obj1;
    derived obj2;
    base_ptr = &obj2; // pointer of base class pointing to object of derived class. Doing so will implement the display function
                      //  in the base class and not the derived class. This is called late binding.
    base_ptr->var1 = 100;
    base_ptr->display();
    // base_ptr->var2 = 30 //will throw error

    derived *derived_ptr;
    derived_ptr = &obj2;
    derived_ptr->var2 = 50;
    derived_ptr->display(); //will display from derived class

    return 0;
}
