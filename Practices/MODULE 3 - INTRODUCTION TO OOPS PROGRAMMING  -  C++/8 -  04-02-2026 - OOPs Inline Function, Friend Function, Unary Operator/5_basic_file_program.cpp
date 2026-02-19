#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[50];
    ofstream o1;//write
    o1.open("yash.txt");
    
    cout<<"Enter value : ";
    cin>>data;
    
    o1<<data<< endl;
    
    o1.close();
    
   ifstream i1;//read
   i1.open("yash.txt");
   cout << "Reading from the file" << endl; 
   i1>>data; 
   cout << data << endl;     
   return 0;
}