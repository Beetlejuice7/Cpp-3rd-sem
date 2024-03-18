include <iostream>
using namespace std;

template<typename T>
void swaping(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    float f1 = 3.14, f2 = 6.28;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "f1 = " << f1 << ", f2 = " << f2 << endl;

    swaping(x, y);
    swaping(f1, f2);

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "f1 = " << f1 << ", f2 = " << f2 << endl;

    return 0;
}