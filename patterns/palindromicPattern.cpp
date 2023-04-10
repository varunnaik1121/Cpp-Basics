#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows ";
    cin >> n;
    // to print the number of rows
    for (int i = 1; i <= n; i++)
    {
        // int j;

        // for (j = 1; j <= n - i; j++)
        // {
        //     cout << " ";
        // }
        // int k = i;

        // for (; j <= n; j++)
        // {
        //     cout << k--;
        // }
        // k = 2;
        // for (; j <= n + i - 1; j++)
        // {
        //     cout << k++ << " ";
        // }

        int j;

        for (j = 1; j < n; j++)
        {
            cout << " ";
        }
        int k = 1;
        for (; j <= n + i; j++)
        {
            cout << k-- << " ";
        }
        cout << endl;
    }

    return 0;
}