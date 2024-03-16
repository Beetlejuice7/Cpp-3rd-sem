#include<iostream>
using namespace std;
class polygon
{
    protected:
    double height, length;
    public:
    // polygon(){}
    polygon(double h, double l)
    {
        height = h;
        length = l;
    }
    virtual void area() = 0;
};
class rectangle : public polygon
{
    public:
    rectangle(double h, double l) : polygon(h, l){}
    void area()
    {
        cout << "Area of Rectangle : " << length * height << endl;
    }
};
class triangle : public polygon
{
    public:
    triangle(double h, double l) : polygon(h, l){}
    void area()
    {
        cout << "Area of Triangle : " << 0.5 * length * height << endl;
    }
};


int main()
{
    rectangle r1(4.2, 3);
    triangle t1(4.2, 3);
    r1.area();
    t1.area();

    return 0;
}