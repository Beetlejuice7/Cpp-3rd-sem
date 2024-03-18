#include<iostream>
using namespace std;
class furniture
{
    string brand, color;
    int cost;
    public:
    void getdata()
    {
        cout << "Which furniture brand you want : ";
        cin >> brand;
        cout << "Cost : ";
        cin >> cost;
        cout << "Color of furniture :";
        cin >> color;
    }
    void display()
    {
        cout << endl;
        cout << "Furniture Details :-" << endl;
        cout << "Furniture Name : " << brand << endl;
        cout << "Furniture Cost : " << cost << endl;
        cout << "Furniture Color : " << color << endl;
        cout << endl;
    }
};
class chair : public furniture
{
    int cost;
    string color, brand;
    public:
    void getdata()
    {
        furniture :: getdata();
        cout << "Chair Brand : ";
        cin >> brand;
        cout << "Chair Cost : ";
        cin >> cost;
        cout << "Chair Color : ";
        cin >> color;
    }
    void display()
    {
        furniture :: display();
        cout << endl;
        cout << "Chair Details :-" << endl;
        cout << "Brand Name : " << brand << endl;
        cout << "Chair Cost : " << cost << endl;
        cout << "Chair Color : " << color << endl;
        cout << endl;
    }
};
class table : public furniture
{
    int cost;
    string color, brand;
    public:
    void getdata()
    {
        cout << "Table Brand : ";
        cin >> brand;
        cout << "Table Cost : ";
        cin >> cost;
        cout << "Table Color : ";
        cin >> color;
    }
    void display()
    {
        cout << endl;
        cout << "Table Details :-" << endl;
        cout << "Brand Name : " << brand << endl;
        cout << "Table Cost : " << cost << endl;
        cout << "Table Color : " << color << endl;
        cout << endl;
    }
};


int main()
{
    system("clear");
    chair ch;
    table tb;
    ch.getdata();
    tb.getdata();
    ch.display();
    tb.display();

    return 0;
    
}