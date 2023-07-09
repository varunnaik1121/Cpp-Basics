#include <iostream>

using namespace std;

int findPivot(int arr[], int size)
{
    int start, end, mid;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid > start && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        if (mid < end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return start;
}

int main()
{
    int arr[] = {7, 9, 11, 12, 5};
    int size = 6;
    int target = 0;
    int pivot = findPivot(arr, size);
    cout << "The pivot is " << pivot + 1 << endl;

    return 0;
}