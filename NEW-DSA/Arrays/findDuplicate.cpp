#include <iostream>
using namespace std;
int main()
{
    // fininf the duplicate among the arrays given by n where n-1 are numbers
    int n = 5;
    int arr[] = {
        1,
        1,
        2,
        3,
        4,

    };
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans ^= i;
    }
    cout << ans << endl;

    return 0;
}

// [1,2,3,4,1]
// [1,2,3,4]
// if we use XOR for the two arrays then we can cancel out the same and get the duplicate
// optimised with O(N)