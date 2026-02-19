#include <iostream>
using namespace std;

class MyClass 
{
    friend class SecondClass;
    
    private:
	int Secret=5; 
	
	public:
	void printMember() 
	{ 
		cout << Secret << endl; 
	}

};
class SecondClass
{
	public:
	void change(MyClass& yourclass, int x)
	 { 
		yourclass.Secret = x;
	 } 
};


int main()
{
 	MyClass my_class;
	SecondClass sec_class;
    my_class.printMember();
    sec_class.change(my_class,10);
    my_class.printMember();
    my_class.printMember();

    return 0;
    
} 