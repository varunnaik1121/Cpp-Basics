#include <iostream>
using namespace std;

int search(int arr[], int target, int startIndex, int endIndex)
{
    int start = startIndex, end = endIndex, mid;

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

    return mid;
}
int main()
{

    int arr[] = {0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 21, 32, 33, 44, 77, 88, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109}; // target is 8
    int target = 77;                                                                                                                 // 19
    int start = 0;
    int end = 1;
    while (target > arr[end])
    {
        int newStart = end + 1; // value is 2
        end = end + (end - start + 1) * 2;
        start = newStart;
    }
    cout << "end value is " << end << endl;
    cout << search(arr, target, start, end) << endl;

    return 0;
}