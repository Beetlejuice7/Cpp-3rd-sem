#include<iostream>
using namespace std;
class derived;
class base
{
    public:
    void frend(derived &de);
};
class derived
{
    private:
    int a = 7;
    public:
    friend void base :: frend(derived &de);
};
void base :: frend(derived &de)
{
    cout << de.a;
}

int main()
{
    base b;
    derived de;
    b.frend(de);
    
    return 0;
}