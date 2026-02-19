#include<iostream>
using namespace std;

struct Student 
{
    int id;
    string name;
};

int main()
{
    struct Student st;

    st.id=101;
    st.name = "Richa";

    cout<<st.id<<" "<<st.name<<endl;

    return 0;
}