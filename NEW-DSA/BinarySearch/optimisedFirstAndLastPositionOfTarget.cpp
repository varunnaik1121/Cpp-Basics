#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int target)
{
    int start, mid, end, ans = -1;
    start = 0;
    end = n - 1;

    while (start <= end)
    {
        // mid is optimised from (start+end)/2 to start+(end-start)/2
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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

    return ans;
}

int lastOccur(int arr[], int n, int target)
{
    int start, mid, end, ans = -1;
    start = 0;
    end = n - 1;

    while (start <= end)
    {
        // mid is optimised from (start+end)/2 to start+(end-start)/2
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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

    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5};
    int target = 3;
    cout << "index of first occurance found at " << firstOccur(arr, 6, target) << endl;
    cout << "index of Last occurance found at " << lastOccur(arr, 6, target);
    return 0;
}

//[1,2,3,3,3,4,5,6]