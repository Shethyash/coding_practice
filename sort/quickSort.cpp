#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // manage left and right part
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition the array
    int p = partition(arr, s, e);

    // sort the left part
    quickSort(arr, s, p - 1);

    // sort the right part
    quickSort(arr, p + 1, e);
}

int main()
{
    vector<int> arr{2, 4, 1, 6, 9, 9, 9, 9, 9, 9};

    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}