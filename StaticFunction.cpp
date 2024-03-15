#include<iostream>
using namespace std;
class fun
{
    public:
    static int count;
    static void bun()
    {
        cout << "I can access this without creating an object." << endl;
    }
};
int fun :: count=7;
int main()
{
    fun :: bun();
    cout << fun::count;
    return 0;
}