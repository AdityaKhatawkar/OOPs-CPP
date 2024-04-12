/*
syntax: (while inheriting)

class B:public virtual A{
};

The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances.

Example:
If class A has a data member say banana, and classes B and C are inheriting A, here a seperate copy of banana is created in
both B and C. But now, if another class D inherits B and C, that is multiple inheritance, an error is thrown because D doesn't
know which banana to use. To avoid this ambiguity, virtual classes are used.

Using virtual class A while inheriting in B and C makes it so that only one copy of banana is created and both B and C share
the memory for banana.
*/

#include <iostream>
using namespace std;

class A
{
public:
    string banana = "apple";
}; // A is a virtual base class.

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
public:
    void print_fruit()
    {
        cout << "Banana is: " << banana << endl; // will say banana is ambiguous if virtual is not used.
    }
};

int main()
{
    D obj1;
    obj1.print_fruit();

    return 0;
}
