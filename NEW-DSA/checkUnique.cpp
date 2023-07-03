#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 1, 3, 6, 5};
    int sorted[] = {1, 1, 3, 3, 5, 5, 6, 6, 7};

    // first method is O(n^2)

    // for (int i = 0; i < 7; i++)
    // {
    //     int item = arr[i];
    //     int count = 0;
    //     for (int j = 0; j < 7; j++)
    //     {
    //         if (arr[j] == item)
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 1)
    //     {
    //         cout << item << endl;
    //         break;
    //     }
    // }

    // second method is sorting the array and checking the next element
    // Time complexity will be O(nlogn)

    // for (int i = 0; i < 9; i += 2)
    // {
    //     if (sorted[i] != sorted[i + 1])
    //     {
    //         cout << sorted[i] << endl;
    //     }
    // }

    // last method is using XOR operator and cancel out the common terms
    // Time complexity will be O(n)

    int ans = 0;
    for (int i = 0; i < 9; i++)
    {
        ans ^= sorted[i];
    }
    cout << ans << endl;
    return 0;
}