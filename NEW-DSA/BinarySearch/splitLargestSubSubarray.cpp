#include <iostream>
using namespace std;

int no_of_possible_subarray(int arr[], int mid, int size)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum + arr[i] > mid)
        {
            count++;
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    return count;
}

int largestSubarray(int arr[], int size, int m)
{
    // find the max element in this array
    int max = arr[0];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        sum += arr[i];
    }

    int start = max;
    int end = sum;
    int index = 0;
    int mid;
    int ans = start;

    while (start <= end)
    {
        mid = (start + end) / 2;
        int n = no_of_possible_subarray(arr, mid, size);
        if (n > m)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    // basic approach would be linear search and find the smallest Time Complexity will be O(N)
    int arr[] = {3, 6, 1, 2}; // when m=2 split it two two arrays such that the sum of sub arrays in minimum
    // possible subArrays is [2,3] [8,4,1]=>5,13: max is 13,16,17,13, answer will be 13
    int size = 4;
    int m = 2;
    cout << "the smallest sum is the" << largestSubarray(arr, size, m);
    return 0;
}