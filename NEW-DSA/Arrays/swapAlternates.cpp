#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i += 3)
    {
        if (arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
