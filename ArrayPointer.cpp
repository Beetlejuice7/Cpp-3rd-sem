#include<iostream>
using namespace std;
template <typename T, size_t N>
void show(T (&arr)[N])
{
    T sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    cout << "Sum : " << sum << endl;
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    
    show(arr);

    return 0;
    
}