#include<iostream>
using namespace std;


// hirarchical  

// parent class 
class parent
{
    protected:
    int num;    // variable to store user input 

    public:
        // function to take input from user 
        void getinput()
        {
            cout<<"Enter a Number : ";
            cin>>num;
        }
};

class child1 : public parent
{
    public:
    // return the value received from parent class 
    int getvalue1()
    {
        return num;
    }
};

// child class 2
class child2 : public parent 
{
    public : 
    int getvalue2()
    {
        return num;
    }
};

// child class 3 
class child3 : public parent 
{
    public:
    // returns the value received from parent class 
    int getvalue3()
    {
        return num;
    }
};

int main()
{
    // create object of the child class
    child1 c1;
    child2 c2;
    child3 c3;

    // input is taken using parent class function 
    // each child object stores its own value of 'num'
    c1.getinput();
    c2.getinput();
    c3.getinput();

    // values from all three child classes are fetched and multiplied together 
    int result = c1.getvalue1() * c2.getvalue2() * c3.getvalue3();
    
    cout<<"Multiplication of all values = "<<result<<endl;

    return 0;
}