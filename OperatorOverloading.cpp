#include<iostream>
using namespace std;
class complex
{
    int real, imag;
    public:
    complex(){}
    complex(int re, int ima)
    {
        real = re;
        imag = ima;
    }

    void show()
    {
        cout << real << "+" << imag << "i" << endl;
    }

    complex operator+(complex d)
    {
        complex temp;
        temp.real = real + d.real;
        temp.imag = imag + d.imag;
        return temp;
    }
};



int main()
{
    complex c1(2,3);
    complex c2(4,6);
    complex c = c1 + c2;
    c.show();
    
}