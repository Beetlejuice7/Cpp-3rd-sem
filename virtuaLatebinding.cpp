#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout << "This is base class function." << endl;
    }
    void display()
    {
        cout << "Base display." << endl;
    }
};
class derived : public base
{
    public:
    void show()
    {
        cout << "This is derived class function." << endl;
    }
    void display()
    {
        cout << "Derived display." << endl;
    }
};


int main()
{
    base *b;
    derived d;
    b = &d;
    b->show();
    b->display();
    return 0;
    
}