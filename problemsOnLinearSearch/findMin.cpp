#include <iostream>
using namespace std;

int findMin(int arr[], int n)
{
    int min = arr[0];
    int index;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    return min;
}
int main()
{
    int n;
    cout << "enter n elements" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the minimum from the array is" << findMin(arr, n) << endl;

    return 0;
}