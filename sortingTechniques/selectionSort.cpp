#include <iostream>
#include <stdlib.h>
using namespace std;
void selectionSort(int arr[], int n);
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
    selectionSort(arr, n);

    return 0;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int bigIndex = 0;
        for (int j = 0; j <= n - i - 1; j++)
        {

            if (arr[j] > arr[bigIndex])
            {

                bigIndex = j;
            }
        }

        int temp = arr[n - i - 1];
        arr[n - i - 1] = arr[bigIndex];
        arr[bigIndex] = temp;
    }
    cout << "Elements after sorting are \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}