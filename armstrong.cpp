#include <iostream>
using namespace std;
int main()
{
    int number, squareOfSum = 0, temp = 1;

    cout << "enter the positive integer ";
    cin >> number; // 371
    temp = number;
    while (temp > 0)
    {
        int remainder = temp % 10;                        // 7
        squareOfSum += remainder * remainder * remainder; // 1+49
        temp = temp / 10;                                 // 37
    }
    if (number == squareOfSum)
    {
        cout << number << " is a armstrong number";
    }
    else
    {
        cout << number << " is not a armstrong number";
    }

    return 0;
}