#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int *ptr;
    ptr = &arr[0];
    
    for (int i = 0; i < 7; i++)
    {
        cout << *(ptr + i) << ", ";
    }
    
    return 0;
    
}