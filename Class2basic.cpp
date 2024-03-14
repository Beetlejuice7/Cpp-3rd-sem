#include<iostream>
using namespace std;
class timer
{
    int hour, minute;
    public:
    void get(int t)
    {
        hour = t/60;
        minute = t%60;
    }
    int add()
    {
        cout << "The time is " << hour << ":" << minute << endl;
        int m = minute + 10;
        return m;
    }
};


int main()
{
    int x = 90;
    int j;
    timer t1;
    t1.get(x);
    j = t1.add();
    cout << "10 Addition in minute : " << j << endl;

    return 0;
    
}