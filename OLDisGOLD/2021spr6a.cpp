#include<iostream>
using namespace std;
template <typename t, int N>

void add(t (&arr)[N])
{
    t sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    cout << "Sum : " << sum << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    float arr1[] = {1.1,2.1,3.1,4.1,5.1,6.1,7.1};
    add(arr);
    add(arr1);

    return 0;
}