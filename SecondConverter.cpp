#include<iostream>
using namespace std;
class converter
{
    int hour, minute;
    public:
    converter(int h, int m)
    {
        hour = h;
        minute = m;
    }
    int seconds()
    {
        int totalmin = hour * 60 + minute;
        return totalmin * 60;
    }
};


int main()
{
    converter con(2, 30);

    cout << "Total seconds : " << con.seconds() << endl;

    return 0;
    
}