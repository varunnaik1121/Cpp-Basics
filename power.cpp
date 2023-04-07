#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number, power;
    cout << "enter a number ";
    cin >> number;
    cout << "enter a its power ";
    cin >> power;
    cout << "the power of a " << number << " is " << pow(number, power);
    return 0;
}