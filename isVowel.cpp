#include <iostream>
using namespace std;
int main()
{
    char letter;

    cout << "enter a upperCase to check vowel or consonent ";
    cin >> letter;
    char upperCase;
    upperCase = tolower(letter);
    if (upperCase == 'a' || upperCase == 'e' || upperCase == 'i' || upperCase == 'o' || upperCase == 'u')
    {
        cout << upperCase << " is "
             << "vowel";
    }
    else
    {
        cout << upperCase << " is "
             << "consonent";
    }
    return 0;
}