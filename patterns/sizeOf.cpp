#include <iostream>
using namespace std;
int main()
{
    int number = 10;
    float fnum = 10.5;
    char c = 'a';
    char name[10] = "varun";
    double dnum = 1234567;
    long lnum = 122.2222222;
    cout << "the size of number is " << sizeof(number) << "\n";
    cout << "the size of fnum is " << sizeof(fnum) << "\n";
    cout << "the size of c is " << sizeof(c) << "\n";
    cout << "the size of name is " << sizeof(name) << "\n";
    cout << "the size of dnum is " << sizeof(dnum) << "\n";
    cout << "the size of lnum is " << sizeof(lnum) << "\n";

    return 0;
}