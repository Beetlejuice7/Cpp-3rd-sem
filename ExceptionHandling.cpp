#include<iostream>
using namespace std;
int main()
{
    system("clear");
    double a, b;
    cout << "Enter the value of a : " ;
    cin >> a;
    cout << "Enter the value of b : " ;
    cin >> b;

    try
    {
        if(b==0)
        {
            throw 1;
        }
        else
        {
            cout << a/b << endl;
        }
    }
    catch(int e)
    {
        cout << "Division by zero." << endl;
    }
    
    return 0;
    
}