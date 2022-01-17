#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int binarySearch(vector<int> &arr, int key)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }
    }

    return -1;
}

int findPeak(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    vector<int> even{2, 4, 6, 8, 12, 18};
    vector<int> odd{3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 14);

    cout << " Index of 14 is " << oddIndex << endl;

    return 0;
}