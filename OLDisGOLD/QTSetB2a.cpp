#include<iostream>
using namespace std;
class Area
{
    double length, breadth;
    public:
    Area(double l, double b)
    {
        length = l;
        breadth =b;
    }
    double returnArea()
    {
        return length * breadth;
    }
    double returnperimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    double l, b;
    cout << "Enter length : ";
    cin >> l;
    cout << "Enter breadth : ";
    cin >> b;
    Area tri(l, b);
    double area, perimeter;
    area = tri.returnArea();
    perimeter = tri.returnperimeter();

    cout << "Area of Rectangle : " << area << endl;
    cout << "Perimeter of Rectangle : " << perimeter << endl;
    
    return 0;
}