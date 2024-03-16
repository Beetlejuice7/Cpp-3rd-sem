#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a=2;
    public:
    friend void frend(A &oaj, B &obj);
};
class B
{
    private:
    int b=2;
    public:
    friend void frend(A &oaj, B &obj);
};
void frend(A &oaj, B &obj)
{
    int c = oaj.a + obj.b;
    cout << "Result : " << c << endl;
}


int main()
{
    A oaj;
    B obj;

    frend(oaj, obj);

    return 0;
}