#include <iostream>
using namespace std;

int ceil(int arr[], int size, int target)
{
    int start, end, mid, index = -1;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
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
    // problem statement : find the number equal to target or the greatest element after the target
    int arr[] = {0, 1, 1, 3, 4, 5, 6};
    int size = 7;
    int target = 2;
    cout << "the ceil of the array  is at index " << ceil(arr, size, target);
    return 0;
}