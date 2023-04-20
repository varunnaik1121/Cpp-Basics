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
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        for (int c = 0; c < i + 1; c++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                j--;
            }
            else
            {
                break;
            }
        }
    }
    cout << "Elements after sorting are \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}