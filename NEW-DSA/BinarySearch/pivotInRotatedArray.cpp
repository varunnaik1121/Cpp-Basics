#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int start, end, mid;
    start = 0;
    end = size - 1;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (arr[mid] > arr[0])
        {
            start = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return end;
}
int main()
{
    // basic approach would be linear search and find the smallest Time Complexity will be O(N)
    int arr[] = {5, 1, 2};
    int size = 3;
    cout << "the peak element is at index " << findPivot(arr, size);
    return 0;
}