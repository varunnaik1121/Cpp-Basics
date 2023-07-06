#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start, mid, end, flag = 0;
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        // mid is optimised from (start+end)/2 to start+(end-start)/2
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            flag = 1;
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 6, 7, 9, 10};
    int target = 4;
    cout << binarySearch(arr, 7, target);
    return 0;
}