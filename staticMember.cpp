#include<iostream>
using namespace std;
class car
{
    string model;
    int code;
    static int totalcars;
    public:
    void addcar(string model, int code)
    {
        this->model = model;
        this->code = code;
        totalcars++;
    }
    void show()
    {
        cout << "Model : " << model << endl;
        cout << "Code : " << code << endl;
        cout << "This is car number : " << totalcars << endl << endl;
    }
};
int car :: totalcars=0;
int main()
{
    car toyota, honda, suzuki;
    toyota.addcar("GTR R-34", 7);
    toyota.show();
    honda.addcar("Civic", 9);
    honda.show();
    suzuki.addcar("Cbr", 600);
    suzuki.show();
    

    return 0;
}