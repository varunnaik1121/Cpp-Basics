#include <iostream>
using namespace std;
int main()
{
    // the logic is comparing the both the arrays and mark the element in the second array as marked...
    // time complexity will be O(n^2)

    // a two pointer approach to solve this for best optimisation
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 3};

    int i = 0;
    int j = 0;
    while ((i < 5) && (j < 4))
    {
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            i++;
        }
        else
        {
            cout << arr1[i] << endl;
            i++;
            j++;
        }
    }

    return 0;
}