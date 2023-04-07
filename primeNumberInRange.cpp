#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int number)
{
    int flag = true;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            flag = false;
            break;
        }
    }

    flag ? cout << number << " " : cout << "";
}

int main()
{
    int start, end;
    cout << "enter the number for range";

    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        isPrime(i);
    }

    return 0;
}