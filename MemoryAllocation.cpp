#include<iostream>
using namespace std;
class fun
{
    public:
    fun()
    {
        cout << "this called." << endl;
    }
    ~fun()
    {
        cout << "deleted." << endl;
    }
};


int main()
{
    fun* obj = new fun;

    delete obj;

    return 0;
    
}