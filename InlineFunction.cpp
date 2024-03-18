#include<iostream>
using namespace std;
inline int sqr(int a)
{
    return a * a;
}


int main()
{
    int num = 4;
    cout << "Square of " << num << " : " << sqr(num);
    

    return 0;
}