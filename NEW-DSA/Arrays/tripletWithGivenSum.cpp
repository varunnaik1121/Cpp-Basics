#include <iostream>
using namespace std;
int main()
{

    int arr[] = {
        1,
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
    };
    int sum = 12; /// 345 831
    // a basic brute force approacg for solving the triplets with sum
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "Triplets are " << arr[i] << arr[j] << arr[k] << endl;
                }
            }
        }
    }

    return 0;
}