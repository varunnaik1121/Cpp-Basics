#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int start, end, mid, index = -1;
    start = 0;
    end = size - 1;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            mid = end;
        }
    }
    return start;
}
int main()
{
    // basic approach would be linear search and find the smallest Time Complexity will be O(N)
    int arr[] = {2, 3, 5, 1};
    int size = 4;
    cout << "the peak element is at index " << findPivot(arr, size);
    return 0;
}