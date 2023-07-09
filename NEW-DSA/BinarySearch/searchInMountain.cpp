#include <iostream>

using namespace std;

int peakIndex(int arr[], int size)
{
    int start, end, mid, index = -1;
    start = 0;
    end = size - 1;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
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
    int arr[] = {1, 2, 3, 5, 6, 4, 3, 0};
    int size = 8;
    int target = 0;
    int peak = peakIndex(arr, size);
    cout << "peak is " << peak << endl;
    int firstTry = binarySearch(arr, 0, target, true, peak);
    if (firstTry == -1)
    {
        cout << binarySearch(arr, peak + 1, target, false, size - 1);
    }
    else
    {
        cout << firstTry << endl;
    }

    return 0;
}