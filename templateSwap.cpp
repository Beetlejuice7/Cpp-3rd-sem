#include<iostream>
using namespace std;
template < typename t >

void swapval(t a, t b)
{
    t temp = a;
    a = b;
    b = temp;

    cout << "After swap :-" << endl;
    cout << "x = " << a << "\ty = " << b << endl << endl;
    
}

int main()
{
    int a = 4, b = 7;
    char m = 'P', n = 'R'; 

    cout << "Before swap :-" << endl;
    cout << "x = " << a << "\ty = " << b << endl;
    swapval(a, b);
    
    double a = 0.5, b = 9.2;
    cout << "Before swap :-" << endl;
    cout << "x = " << a << "\ty = " << b << endl;
    swapval(a, b);

    cout << "Before swap :-" << endl;
    cout << "x = " << m << "\ty = " << n << endl;
    swapval(m, n);

    return 0;
}