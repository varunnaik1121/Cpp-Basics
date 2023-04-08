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
        // to print the number of spaces en each rows
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // to print the number of stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
