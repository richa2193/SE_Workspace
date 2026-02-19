#include <iostream>
using namespace std;

class Academic 
{
    protected:
    int marks;

    public:
    void inputMarks() 
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

class Sports 
{
    protected:
    int score;

    public:
    void inputScore() 
    {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
};

class Result : public Academic, public Sports 
{
    public:
    void displayResult() 
    {
        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main() 
{
    Result r;
    r.inputMarks();
    r.inputScore();
    r.displayResult();
    return 0;
}
