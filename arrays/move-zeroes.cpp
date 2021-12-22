#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/move-zeroes/submissions/

void moveZeroes(vector<int> &nums)
{
    int i = 0, j = 0;

    while (j < nums.size())
    {
        if (nums[j] == 0)
            j++;
        else
        {
            swap(nums[i++], nums[j++]);
        }
    }
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
    int n;
    cin >> n;
    vector<int> arr;
    while (n--)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    // vector<int> arr1{0, 1, 4, 0, 5, 7, 15, 0, 0};
    moveZeroes(arr);
    printArray(arr);

    return 0;
}