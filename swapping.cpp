#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the first two numbers for swapping ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "the swapping of two is " << a << " and " << b;

    return 0;
}