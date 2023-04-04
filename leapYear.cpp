#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter the year to find this is leap year or not \t";
    cin >> year;
    if (year % 100 == 0 && year % 400 != 0)
    {
        cout << year << " is a not leap year";
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year";
    }
    else
    {
        cout << year << "is not a leap year";
    }

    return 0;
}