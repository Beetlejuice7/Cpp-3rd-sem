#include<iostream>
using namespace std;

template <typename T, size_t N>
void add(T (&arr)[N]) {
    T sum = 0;
    for (size_t i = 0; i < 3; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    add(arr);

    return 0;
}
