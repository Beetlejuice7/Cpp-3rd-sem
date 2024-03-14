#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout << "A constructor" << endl;
    }
};
class B
{
    public:
    B()
    {
        cout << "B constructor" << endl;
    }
};
class C
{
    public:
    C()
    {
        cout << "C constructor" << endl;
    }
};

class D : public C, A, B
{
    public:
    D()
    {
        cout << "D constructor" << endl;
    }
};


int main()
{
    D d;
    
}