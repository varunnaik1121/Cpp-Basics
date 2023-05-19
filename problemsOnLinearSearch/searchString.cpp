#include <iostream>
#include <stdbool.h>
using namespace std;

bool searchString(string name, char target)
{
    if (name.length() == 0)
    {
        return false;
    }

    for (int i = 0; i < name.length(); i++)
    {
        if (target == name.at(i))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string name = "varun";
    char target = 'n';
    cout << searchString(name, target) << endl;

    return 0;
}