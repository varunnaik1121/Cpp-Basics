#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 50, c = 20;
    int *ptrC = &c; // in this line a pointer variable is assigned with int as it stores the value address
    *ptrC = 100;
    cout << "the variables before swap are " << a << " " << b << endl;
    swap(&a, &b);
    cout << "the variables after swap are " << a << " " << b << endl;
    cout << "the value of c is " << c << endl;
    return 0;
}