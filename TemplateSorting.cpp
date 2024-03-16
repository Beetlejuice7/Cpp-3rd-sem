#include<iostream>
using namespace std;
template< typename T>

void sort(T arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        { 
            if(arr[i]>arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After sorting :-\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}


int main()
{
    system("clear");
    int *ptr;
    int arr[]={};
    float arr1[]={};
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter value of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    sort(arr, size);

    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter value of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    cout << "Before sorting :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << endl;
    }
    sort(arr1, size);

    
    return 0;
    
}