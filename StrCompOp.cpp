#include<iostream>
using namespace std;
class comp
{
    string see;
    public:
    comp(string s)
    {
        see = s;
    }
    int operator==(comp &str)
    {
        return see == str.see;
    }
};


int main()
{
    comp c1("hello");
    comp c2("hello");

    if (c1 == c2)
    {
        cout << "Identical." << endl;
    }
    else
    {
        cout << "Not identical." << endl;
    }
    
    return 0;
}