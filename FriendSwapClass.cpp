#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    A(int val)
    {
        a = val;
    }
    void show()
    {
        cout << "a : " << a << endl;
    }
    friend void swap(A &oaj, B &obj);
};
class B
{
    int b;
    public:
    B(int val)
    {
        b = val;
    }
    void show()
    {
        cout << "b : " << b << endl;
    }
    friend void swap(A &oaj, B &obj);
};

void swap(A &oaj, B &obj)
{
    int temp = oaj.a;
    oaj.a = obj.b;
    obj.b = temp;
}


int main()
{
    A oaj(4);
    B obj(7);

    cout << "Before swap :-" << endl;
    oaj.show();
    obj.show();

    swap(oaj, obj);

    cout << "After swap :-" << endl;
    oaj.show();
    obj.show();
    
}