#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 1, 3, 6, 5};
    int sorted[] = {1, 1, 3, 3, 5, 5, 6};

    for (int i = 0; i < 5; i++)
    {
        int item = arr[i];
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] == item)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << item << endl;
            break;
        }
    }
    return 0;
}