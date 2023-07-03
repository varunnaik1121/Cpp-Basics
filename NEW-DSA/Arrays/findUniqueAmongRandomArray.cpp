#include <iostream>
using namespace std;

int main()
{
    // first apporach will be maintaining the count
    // Time complexity will be
    // int arr[] = {10, 20, 30, 40, 50, 20, 10, 30};
    int sorted[] = {10, 10, 10, 10, 20, 20, 30, 30, 40, 50};
    // int count = 0;
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         if (arr[j] == arr[i])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 1)
    //     {
    //         cout << "the unique element in array is" << arr[i] << endl;
    //     }
    //     count = 0;
    // }

    // checking if the next and previous elements are not equal if so then that is unique
    // Time Complexity O(NlogN)
    int n = 10;

    for (int i = 0; i < n - 1; i++)
    {
        if ((sorted[i] != sorted[i + 1]) && (sorted[i] != sorted[i - 1]))
        {

            cout << sorted[i] << endl;
        }
    }
    if (sorted[n - 1] != sorted[n - 2])
    {
        cout << sorted[n-1];
    }

    return 0;
}