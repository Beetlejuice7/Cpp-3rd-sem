#include<iostream>
using namespace std;
class college
{
    string name, address, mail_id;
    public:
    void getdata()
    {
        cout << "Enter College Name : ";
        cin >> name;
        cout << "Enter Address : ";
        cin >> address;
        cout << "Enter Mail ID : ";
        cin >> mail_id;
    }
    void putdata()
    {
        cout << endl << endl;
        cout << "College Details :-" << endl;
        cout << "College Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Mail ID : " << mail_id << endl;

    }
};

class faculty : public college
{
    string engineering, management, humanities;
    public:
    void getdata()
    {
        college :: getdata();
        cout << "Enter engineering : ";
        cin >> engineering;
        cout << "Enter management : ";
        cin >> management;
        cout << "Enter humanities : ";
        cin >> humanities;
    }
    void putdata()
    {
        college :: putdata();
        cout << endl << endl;
        cout << "College Faculty Details :-" << endl;
        cout << "Engineering : " << engineering << endl;
        cout << "Management : " << management << endl;
        cout << "Humanities : " << humanities << endl;
    }
};

class department : public college
{
    string BBA, BCA, BCE;
    public:
    void getdata()
    {
        college :: getdata();
        cout << "Enter BBA : ";
        cin >> BBA;
        cout << "Enter BCA : ";
        cin >> BCA;
        cout << "Enter BCE : ";
        cin >> BCE;
    }
    void putdata()
    {
        college :: putdata();
        cout << endl << endl;
        cout << "College Department Details :-" << endl;
        cout << "BBA : " << BBA << endl;
        cout << "BCA : " << BCA << endl;
        cout << "BCE : " << BCE << endl;
    }
};

int main()
{
    faculty fac;
    department dep;
    cout << "Enter Faculty Details :-" << endl;
    fac.getdata();
    fac.putdata();
    cout << endl;
    cout << "Enter Department Details :-" << endl;
    dep.getdata();
    dep.putdata();
    
    return 0;
}