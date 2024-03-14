#include<iostream>
using namespace std;
template <typename t, size_t N>

void add(t (&arr)[N])
{
    t sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    cout << "Sum : " << sum;

}


int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    add(arr);

    return 0;
}