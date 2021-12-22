#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

bool check(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
            count++;
    }
    if (nums[n - 1] > nums[0])
        count++;
    return count <= 1 ? true : false;
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
    cout << check(arr);
    // printArray(arr);

    return 0;
}