#include <iostream>
using namespace std;

int orderAgnosticArray(int arr[], int target, int n)
{
    int index;
    int start, end, mid;
    if (n == 0)
    {
        return -1;
    }
    start = 0;
    end = n - 1;

    while (start < end)
    {
        mid = (start + end) / 2;
        if (target == arr[mid])
        {
            return mid;
        }

        if (arr[0] < arr[n - 1])
        {

            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target < arr[mid]) //[10,9,8,7,6,5,4]=>target
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}
int main()
{
    int n, target;

    cout << "enter number of elements to array in sorted order ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element to search " << endl;
    cin >> target;
    cout << orderAgnosticArray(arr, target, n);
    return 0;
}