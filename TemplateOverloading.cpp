#include<iostream>
using namespace std;
template <typename T>
void sum(T a, T b)
{
    T c = a + b;
    cout << "Sum : " << c << endl;
}

template <typename T>
void sum(T a, T b, T c)
{
    T d = a + b + c;
    cout << "Sum : " << d << endl;
}


int main()
{
    sum(2, 2);
    sum(2.5, 2.2);
    sum('P', 'R', 'O');


    return 0;
    
}