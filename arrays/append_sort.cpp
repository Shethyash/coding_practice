#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// https://leetcode.com/problems/merge-sorted-array/submissions/

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int p1 = m - 1, p2 = n - 1, i = m + n - 1;

    while (p2 >= 0)
    {
        if (p1 >= 0 && nums1[p1] > nums2[p2])
        {
            nums1[i--] = nums1[p1--];
        }
        else
        {
            nums1[i--] = nums2[p2--];
        }
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr1{1, 4, 5, 7, 15, 0, 0, 0, 0, 0};
    vector<int> arr2{2, 3, 6, 8, 9};
    merge(arr1, 5, arr2, 5);
    printArray(arr1, 6);

    return 0;
}