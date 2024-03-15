#include<iostream>
using namespace std;
static int count=7;
class base
{
    public:
    base()
    {
        cout << "Hello World." << endl;
    }
};
class derived : public base
{
    public:
    derived() : base() {}
};


int main()
{
    derived de;
    cout << count;
    return 0;
}