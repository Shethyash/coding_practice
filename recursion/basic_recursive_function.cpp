#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
        return true;
    return arr[0] <= arr[1] && isSorted(arr + 1, n - 1);
}

int getSum(int *arr, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    return arr[0] + getSum(arr + 1, n - 1);
}

bool binarySearch(int *arr, int start, int end, int key)
{
    // base case
    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return true;
    else if (arr[mid] > key)
        return binarySearch(arr, start, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, end, key);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout << isSorted(arr, 10) << endl;
    // cout << getSum(arr, 10) << endl;
    cout << binarySearch(arr, 0, 9, 6) << endl;

    return 0;
}