#include <iostream>
using namespace std;
bool isPrime(int number);
int main()
{
    int number;
    bool flag = true;
    cout << "enter a number";
    cin >> number;

    for (int i = 2; i <= number / 2; i++)
    {
        if (isPrime(i) && isPrime(number - i))
        {
            cout << number << " = " << i << " + " << number - i << endl;
        }
    }
    return 0;
}

bool isPrime(int number)
{
    bool isPrime = true;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}