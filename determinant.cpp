#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, descriminant, x1, x2;

    cout << "enter the values of a and b and c ";
    cin >> a >> b >> c;
    descriminant = (b * b) - (4 * a * c);
    if (descriminant > 0)
    {
        cout << "roots are real and different" << endl;
        x1 = (-b + sqrt(descriminant) / 2 * a);
        x2 = (-b - sqrt(descriminant) / 2 * a);
        cout << "x1 = " << x1 << endl;
    }
    return 0;
}