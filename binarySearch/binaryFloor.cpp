#include <iostream>
using namespace std;
int binaryCeil(int arr[], int target, int n)
{
    int index;
    int start, end, mid;
    if (n == 0)
    {
        return -1;
    }
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return end;
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
    cout << binaryCeil(arr, target, n);

    return 0;
}

//[1,2,3,4,5]=>target=6
