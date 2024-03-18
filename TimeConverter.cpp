#include<iostream>
using namespace std;
class time1
{
    int hour, min, sec;
    public:
    time1(){}
    time1(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    time1 convert(time1 &ob)
    {
        time1 temp;
        temp.hour = hour + ob.hour;
        temp.min = min + ob.min;
        temp.sec = sec + ob.sec;

        if (temp.sec>=60)
        {
            temp.min = temp.sec / 60;
            temp.sec %= 60;
        }
        if (temp.min>=60)
        {
            temp.hour = temp.min / 60;
            temp.min %= 60;
        }
        return temp;
    }
    void show()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
};


int main()
{
    time1 t1(2, 40, 122), t2(5, 30, 70);
    time1 result = t1.convert(t2);
    result.show();
    
    return 0;
}