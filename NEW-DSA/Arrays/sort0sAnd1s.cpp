#include <iostream>
using namespace std;
int main()
{
    // basic approach with O(N) time complexity
    // can be sorted so all the zeros are will be on left side
    // two pointer with same array swap 
    //Time complexity is O(N)

    int arr[] = {
        0,
        1,
        1,
        0,
        1,
        1,
        0,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
    };
    int sorted[10];
    int n = 14;
    int i = 0;
    int j = n - 1;

    // two pointer with same array swap

    while ((i <= j))
    {
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    forut (int i = 0; i < n; i++)
    {
        co << arr[i] << endl;
    }

    return 0;
}

// for (int start = 0; start < n; start++)
// {
//     if (arr[start] == 0)
//     {
//         sorted[i] = arr[start];
//         i++;
//     }
//     else
//     {
//         sorted[j] = arr[start];
//         j--;
//     }
// }

// for (int i = 0; i < ; i++)
// {
//     cout << sorted[i];
// }
