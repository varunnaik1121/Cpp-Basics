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
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}