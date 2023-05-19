#include <iostream>
using namespace std;

int searchIn2D(int arr[][3], int row, int column)
{
    int min = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{

    int arr[2][3] = {{1000, 2, 3}, {3, 4, 5}};
    cout << "Smallest from the array is " << searchIn2D(arr, 2, 3);

    return 0;
}