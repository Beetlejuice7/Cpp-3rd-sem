#include<iostream>
using namespace std;
class B;
class A
{
    int a = 4, b = 7;
    public:
    void show()
    {
        cout << "Before :-" << endl;
        cout << a << "\t" << b << endl;
    }
    friend class B;
};
class B
{
    int u, v;
    public:
    void swap(A &a);
    // {
        // int *ptr, *pt;
        // ptr = &a.a;
        // pt = &a.b;                                  //<--One way
        // int temp = *ptr;
        // *ptr = *pt;
        // *pt = temp;
        // cout << "After :-" << endl;
        // cout << a.a << "\t" << a.b << endl;
    // }

};
void B :: swap(A &a)
{
    int temp = a.a;
    a.a = a.b;                                         //<--Another way
    a.b = temp;
    cout << "After :-" << endl;
    cout << a.a << "\t" << a.b << endl;
}

int main()
{
    A a;
    B b;
    a.show();
    b.swap(a);
    
    return 0;
}