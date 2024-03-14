#include<iostream>
using namespace std;
class time1
{
    int hour, minute;
    public:
    void calculate(int cal)
    {
        hour = cal / 60;
        minute = cal % 60;
    }
    void display()
    {
        cout << "The time is " << hour << "hr:" << minute << "min" << endl;
    }
};


int main()
{
    time1 t1;
    int x = 90;
    t1.calculate(x);
    t1.display();
    return 0;
    
}