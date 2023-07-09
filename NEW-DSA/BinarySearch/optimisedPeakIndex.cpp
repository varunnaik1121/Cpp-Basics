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
        if (arr[mid] > arr[mid + 1])
        {

            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 4, 3, 2};
    int size = 8;
    cout << "the peak element is at index " << peakIndex(arr, size);
    return 0;
}