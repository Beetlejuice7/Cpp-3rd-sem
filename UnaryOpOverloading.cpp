#include<iostream>
using namespace std;
class counter
{
    static int count;
    public:
    counter()
    {
        // count = 0;
    }
    void show()
    {
        cout << "Counter : " << count << endl;
    }
    void operator --()
    {
        --count;
    }
};
int counter :: count = 10;

int main()
{
    counter c1, c2;
    for (int i = 0; i < 3; i++)
    {
        --c1;
        c1.show();
    }
    cout << "Another object." << endl;
    c2.show();
    
    
    return 0;
}