#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    // finding the duplicate among the arrays given by n where n-1 are numbers//[1,2,3,4,4]=>2,3,4 if we XOR with 1 2 3 4 ans will 1wbe the unique one
    int n = 5;
    int arr[] = {

        1,
        2,
        3,
        4,
        4

    };
    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     ans ^= arr[i];
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     ans ^= i;
    // }
    // cout << ans << endl;

    cout << findDuplicate(arr, 5);

    return 0;
}

// [1,2,3,4,1]
// [1,2,3,4]
// if we use XOR for the two arrays then we can cancel out the same and get the duplicate
// optimised with O(N)

// another approach would be sort the array with NlogN and find if the next element is same if same then return that element