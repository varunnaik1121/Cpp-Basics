#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number which u want to generate the table ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "*" << i << "=" << num * i << endl;
    }
    return 0;
}