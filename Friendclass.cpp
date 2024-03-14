#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int x = 4;
    protected:
    int y = 7;
    public:
    friend class B;
};

class B
{
    public:
    void show(A &obj)
    {
        cout << "X = " << obj.x << "\tY = " << obj.y << endl;
    }
};

int main()
{
    A p;
    B o;
    o.show(p);
    
    return 0;
}