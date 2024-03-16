#include<iostream>
using namespace std;
template< class T1, class T2 >

class Tempdemo
{
    T1 a;
    T2 b;
    public:
    Tempdemo(T1 x, T2 y)
    {
        a = x;                              //Multiple data type in a class template
        b = y;
    }
    void show()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << endl;
    }
};


int main()
{
    Tempdemo <int, float> temp(2, 4.7);
    temp.show();
    Tempdemo <int, char> temp1(2, 'p');
    temp1.show();
    
    return 0;
}