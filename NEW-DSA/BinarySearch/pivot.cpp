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
        if (arr[mid] < arr[mid - 1])
        {
            return mid;
        }
        if (arr[mid] > arr[mid + 1])
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

int binarySearch(int arr[], int starting, int target, bool isAscending, int ending)
{
    int start = starting, end = ending, mid;

    if (isAscending == true)
    {
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }
            else if (target > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    else
    {
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }
            else if (target > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 5, 6, 1, 2, 3};
    int size = 6;
    int target = 0;
    int pivot = findPivot(arr, size);
    cout << "The pivot is " << pivot << endl;

    return 0;
}