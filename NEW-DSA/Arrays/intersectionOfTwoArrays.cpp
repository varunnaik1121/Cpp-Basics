#include <iostream>
using namespace std;
int main()
{
    // the logic is comparing the both the arrays and mark the element in the second array as marked...
    // time complexity will be O(n^2)
    int arr1[] = {1, 2, 3, 3, 3, 4};
    int arr2[] = {3, 4};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            if (arr1[i] == arr2[j])
            {
                arr2[j] = arr1[0] - 100;
                cout << arr1[i] << endl;
                break;
            }
        }
    }

    return 0;
}