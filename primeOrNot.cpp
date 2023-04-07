#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number;
    bool isPrime = true;
    cout << "enter the number ";
    cin >> number;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
    }

    isPrime ? cout << number << " is a prime number" : cout << number << " is not a prime number";

    return 0;
}