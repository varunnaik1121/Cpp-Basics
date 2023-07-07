#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int start, end, mid, index = -1;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] <= arr[mid + 1] && arr[mid] <= arr[mid - 1])
        {
            index = mid;
            return index;
        }
        else if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
        {
            start = mid + 1;
        }

        else

        {
            end = mid - 1;
        }
    }
    return index;
}
int main()
{
    // basic approach would be linear search and find the smallest Time Complexity will be O(N)
    int arr[] = {7, 9, 10, 12, 12, 0, 2, 3, 4, 5};
    int size = 9;
    cout << "the peak element is at index " << findPivot(arr, size);
    return 0;
}