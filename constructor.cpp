#include<iostream>
using namespace std;
class con
{
    public:
    int a=7;
    con()
    {
        cout << "Constructor been called" << endl;
    }
    ~con()
    {
        cout << "Destructor been called" << endl;
    }
    void display()
    {
        cout << "Normal function been called" << endl;
    }
};


int main()
{
    system("clear");
    con c;
    cout << c.a << endl;
    c.display();
    return 0;
    
}