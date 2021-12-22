#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/rotate-array/

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (k > n)
        k = k % n;
    if (n == 1 || n == k)
        return;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;
}
void printArray(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    while (n--)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    // vector<int> arr1{0, 1, 4, 0, 5, 7, 15, 0, 0};
    rotate(arr, k);
    printArray(arr);

    return 0;
}