#include <iostream>
using namespace std;
// this is invalid solution for this question
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

    // A basic approach to get the
    int arr[] = {1, 3, 4, 6, 7, 9, 10};
    int target = 4;
    int indexes[10];
    int index = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == target)
        {
            indexes[index] = i;
            index++;
        }
    }

    cout << "the answer is " << endl;

    // return the first in array and return the last in array
    // example arr[0] and arr[length-1]
    // if array has no elements in it the return -1 in both the conditions
    // if array has one element then return -1 -1 in both the conditions
    // cout << binarySearch(arr, 7, target);
    return 0;
}