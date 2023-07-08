#include <iostream>
using namespace std;

int search(int arr[], int target)
{
    int start, end, mid, index = -1;
    start = 0;
    end = start + 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target>arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return mid;
}
int main()
{

    int arr[] = {0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 21, 32, 33, 44};
    int target = 7;
    cout << "the ceil of the array  is at index " << search(arr, target);
    return 0;
}