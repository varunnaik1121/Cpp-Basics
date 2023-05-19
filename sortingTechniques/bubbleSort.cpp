#include <iostream>
#include <stdlib.h>
using namespace std;
void bubbleSort(int arr[], int n);
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
    bubbleSort(arr, n);

    return 0;
}

void bubbleSort(int arr[], int n)
{
    cout << "sorting the given array \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}