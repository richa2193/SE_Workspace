#include <iostream>
using namespace std;

class Animal 
{
    public:
    virtual void sound() 
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal 
{
    public:
    void sound() 
    {
        cout << "Dog barks" << endl;
    }
};

int main() 
{
    Animal* obj;
    Dog d;
    obj = &d;

    obj->sound();   // Calls Dog's function
    return 0;
}
