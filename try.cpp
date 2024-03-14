#include<iostream>
using namespace std;
class basic2class
{
    int hour, minute;
    public:
    basic2class(int t)
    {
        hour = t/60;
        minute = t%60;
    }
    void show()
    {
        cout << "the time is " << hour << ":" << minute << endl;
    }
    ~basic2class()
    {
        cout << "Deleted." << endl;
    }
};

int main()
{
    basic2class b2c(90);
    b2c.show();
    
    return 0;
}