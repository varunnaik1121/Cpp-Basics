#include <iostream>
using namespace std;
bool isEven(int value)
{
    int count = 0;
    int val = value;
    while (val > 0)
    {
        count++;
        val = val / 10;
    }
    if (count % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int findNumber(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isEven(arr[i]))
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int arr[5] = {1, 10, 4, 23451, 100};

    cout << findNumber(arr, 5) << endl;
    return 0;
}