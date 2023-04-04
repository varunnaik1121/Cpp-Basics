#include <iostream>
using namespace std;
int main()
{
    int a = -20, b = 50;
    cout << "numbers before swapping are " << a << " " << b;

    a = a + b; // 30
    b = a - b; //-20
    a = a - b;
    cout << "numbers after swapping are " << a << " " << b;

    return 0;
}