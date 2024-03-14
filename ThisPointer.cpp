#include<iostream>
using namespace std;
class pointer
{
    int x;
    public:
    void point(int a)
    {
        x = a;
    }
    void show()
    {
        cout << x;
    }
};
int main()
{
    int x = 7;
    pointer poi;
    poi.point(x);
    poi.show();

    return 0;
}