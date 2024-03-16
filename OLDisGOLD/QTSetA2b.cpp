#include<iostream>
using namespace std;
class simplecal
{
    double a, b, add, sub, mul, div;
    public:
    void getdata()
    {
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number : ";
        cin >> b;

        add = a + b;
        sub = a - b;
        mul = a * b;
        div = a / b;
    }
    void show()
    {
        cout << "Simple Calculator Results :" << endl;
        cout << "Addition : " << add << endl;
        cout << "Subtraction : " << sub << endl;
        cout << "Multiplication : " << mul << endl;
        cout << "Division : " << div << endl;
        cout << endl;
    }
};
class sciencal
{
    double angle, b, sine, cosine, power, squareroot;
    public:
    void getdata()
    {
        cout << "Enter first number : ";
        cin >> angle;
        cout << "Enter second number : ";
        cin >> b;

        sine = sin(angle);
        cosine = cos(angle);
        power = pow(angle, b);
        squareroot = sqrt(angle);
    }
    void show()
    {
        cout << "Scientific Calculator Results :" << endl;
        cout << "Sine : " << sine << endl;
        cout << "Cosine : " << cosine << endl;
        cout << "Power : " << power << endl;
        cout << "Square Root : " << squareroot << endl;
        cout << endl;
    }
};
class Hybridcal : public simplecal, sciencal
{
    public:
    void showdata()
    {
        simplecal :: getdata();
        simplecal :: show();

        sciencal :: getdata();
        sciencal :: show();
    }
    
};

int main()
{
    Hybridcal hybrid;
    hybrid.showdata();

    return 0;
    
}