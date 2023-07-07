#include <iostream>
using namespace std;

int peakIndex(int arr[], int size)
{
    int start, end, mid, index = -1;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            index = mid;
            return index;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }

        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
    }
    return index;
}
int main()
{

    int arr[] = {1, 2, 3, 5, 6, 1};
    int size = 6;
    cout << "the peak element is at index " << peakIndex(arr, size);
    return 0;
}