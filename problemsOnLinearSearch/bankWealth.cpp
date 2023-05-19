#include <iostream>
using namespace std;
int main()
{
    int row = 2;
    int column = 3;
    int arr[row][column] = {{1, 22, 3}, {4, 5, 6}};
    int sum[10]; // output will be 15
    int answer = 0;
    for (int i = 0; i < row; i++)
    {

        int tempSum = 0;
        for (int j = 0; j < column; j++)
        {
            tempSum += arr[i][j];
        }
        if (tempSum > answer)
        {
            answer = tempSum;
        }
    }
    // int max = sum[0];

    // for (int i = 0; i < 2; i++)
    // {
    //     if (sum[i] > max)
    //     {
    //         max = sum[i];
    //     }
    // }
    cout << "answer is " << answer << endl;

    return 0;
}