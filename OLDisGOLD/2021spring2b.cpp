#include<iostream>
using namespace std;
class student
{
    string stname, staddress;
    int stid;
    public:
    void getdata()
    {
        cout << "Enter the name : ";
        cin >> stname;
        cout << "Enter the address : ";
        cin >> staddress;
        cout << "Enter the id : ";
        cin >> stid;
    }

    void putdata()
    {
        cout << "Name : " << stname << endl;
        cout << "Id : " << stid << endl;
        cout << "Address : " << staddress << endl;
    }
};

class captain : public student
{
    string house, colorcode;
    public:
    void getdata()
    {
        student :: getdata();
        cout << "Enter captain's house : ";
        cin >> house;
        cout << "Enter captain's color code : ";
        cin >> colorcode;
    }

    void putdata()
    {
        student :: putdata();
        cout << "House : " << house << endl;
        cout << "Color code : " << colorcode << endl;
    }
};


int main()
{
    captain cap;
    cap.getdata();
    cap.putdata();
    
}