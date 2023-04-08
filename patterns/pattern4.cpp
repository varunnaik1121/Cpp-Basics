#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows ";
    cin >> n;
    // to print the number of rows
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++) // i=0
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}