#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void insertionSort(vector<int> &arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}

int main()
{
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    insertionSort(arr, arr.size());

    for (int it : arr)
        cout << it << " ";
    return 0;
}