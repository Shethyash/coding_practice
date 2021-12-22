#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    selectionSort(arr, arr.size());

    for (int it : arr)
        cout << it << " ";
    return 0;
}