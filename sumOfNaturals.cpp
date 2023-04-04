#include <iostream>
using namespace std;
int main()
{
    int range;
    int sum = 0;
    cout << "enter the range to generate the natural number";
    cin >> range;
    for (int i = 1; i <= range; i++)
    {
        sum += i;
    }
    cout << "the sum of natural number is " << sum << endl;
    return 0;
}