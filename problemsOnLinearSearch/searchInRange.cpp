#include <iostream>
#include <array>
#include <stdbool.h>

using namespace std;

bool searchInRange(int arr[], int size, int target, int start, int end)
{
    if (size == 0)
    {
        return false;
    }
    if (start < size && end < size)
    {
        for (int i = start; i <= end; i++)
        {

            if (target == arr[i])
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[10] = {10, 20, 30, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << searchInRange(arr, size, 3, 2, 5) << endl;

    return 0;
}