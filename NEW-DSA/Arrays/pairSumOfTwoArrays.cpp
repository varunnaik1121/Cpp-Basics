#include <iostream>
using namespace std;
int main()
{
    // Problem statement=>find the pairs that mathches the sum of the given arrays
    // First approach
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 0};
    int sorted[] = {0, 1, 2, 2, 3, 3, 4, 5, 5};
    int sum = 5;
    int i = 0;
    int j = 8;

    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = i + 1; j < 8; j++)
    //     {
    //         if (arr[i] + arr[j] == sum)
    //         {
    //             cout << arr[i] << " " << arr[j] << endl;
    //         }
    //     }
    // }

    while (i <= j)
    {
        if ((sorted[i] + sorted[j]) == sum)
        {
            cout << sorted[i] << " " << sorted[j] << endl;

            i++;
        }
        else if ((sorted[i] + sorted[j]) > sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}