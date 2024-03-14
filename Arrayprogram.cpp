#include<iostream>
using namespace std;
class student
{
    string Fname, Lname, address;
    public:
    // student(string fname, string lname, string address) :
    // Fname(fname), Lname(lname), address(address) {}
    
    student(string fname, string lname, string address)
    {
        // Fname = fname;
        // Lname = lname;
        // address = address;
    }

    void show()
    {
        cout << "Name : " << Fname << endl;
        cout << "Last name : " << Lname << endl;
        cout << "Address : " << address << endl;
        cout << "----------------------------------|" << endl;
    }

    
};

int main()
{
    int n;
    student std[]= {
        student("pragyan", "shrestha", "darsanchowk"),
        student("tenjen", "rfb", "hollar"),
        student("qwerty", "wscv", "hgfd"),
        student("ytrewq", "qazxc", "fghj"),
        student("asdfg", "yhnm", "jhvcf"),
        student("gfdsa", "hbvc", "mngnb"),
        
    };

    cout << "How many student details you want? ";
    cin >> n;

    cout << "Student Details :-" << endl << "----------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        std[i].show();
    }
    

    
}