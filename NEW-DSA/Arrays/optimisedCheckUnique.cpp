#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,
                 5,
                 2,
                 5, 6};

    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "XOR value is " << ans << endl;
    return 0;
}