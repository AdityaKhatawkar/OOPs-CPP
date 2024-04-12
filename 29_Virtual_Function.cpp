/*
Rules:

    They cannot be static
    They are accessed by object pointers
    Virtual functions can be a friend of another class
    A virtual function in the base class might not be used.
    If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

*/



/*#include <iostream>
using namespace std;

class base
{
public:
    int var1;
    void virtual display() //making the function virtual, then the pointer to this class, pointing to object to derived class,
                           //will execute overridden function in the dericed class.
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
    base_ptr = &obj2; //pointer of base class pointing to an object of derived class.
    base_ptr->var1 = 100;
    base_ptr->display(); //display in derived class is implemented as the display in base class is virtual.
    // base_ptr->var2 = 30 //will throw error

    derived *derived_ptr;
    derived_ptr = &obj2;
    derived_ptr->var2 = 50;
    derived_ptr->display(); //will display from derived class

    return 0;
} */

#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
