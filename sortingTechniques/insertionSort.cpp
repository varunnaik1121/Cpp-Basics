#include <iostream>
#include <stdlib.h>
using namespace std;
void insertionSort(int arr[], int n);
int main()
{
    int n, arr[100];
    cout << "Enter number of elements to array ";
    cin >> n;
    cout << "Enter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array before sorting is \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    insertionSort(arr, n);

    return 0;
}

void insertionSort(int arr[], int n)
{
}