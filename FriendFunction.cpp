#include<iostream>
using namespace std;
class fun
{
    private:
    int a = 4;
    protected:
    int b = 7;
    public:
    friend void frend(fun &obj);
};

void frend(fun &obj)
{
    cout << "A = " << obj.a << "\tB = " << obj.b << endl;
}


int main()
{
    system("clear");
    fun f;
    frend(f);
    
    return 0;
}