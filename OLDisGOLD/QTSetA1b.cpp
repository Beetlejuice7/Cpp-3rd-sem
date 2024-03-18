#include<iostream>
using namespace std;
class student
{
    string fname, lname, major;
    int year;
    float grades;
    public:
    void getdata()
    {
        cout << "Enter first Name of Student : ";
        cin >> fname;
        cout << "Enter last Name of Student : ";
        cin >> lname;
        cout << "Enter major of Student : ";
        cin >> major;
        cout << "Enter year : ";
        cin >> year;
        cout << "Enter grade : ";
        cin >> grades;
    }
    void show()
    {
        cout << endl;
        cout << "Student Details :-" << endl;
        cout << "First Name : " << fname << endl;
        cout << "Last Name : " << lname << endl;
        cout << "Major : " << major << endl;
        cout << "Year : " << year << endl;
        cout << "Grade : " << grades << endl;
    }
};


int main()
{
    student* std = new student;
    student* ptr = std;
    for (int i = 0; i < 3; i++)
    {
        std->getdata();
        std++;
    }
    for (int i = 0; i < 3; i++)
    {
        ptr->show();
        ptr++;
    }
    
    return 0;
    
}