#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {

            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

// recursive bubble sort
void sortArray(int *arr, int n)
{

    // base case - already sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    // 1 case solved
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // Recursive Call
    sortArray(arr, n - 1);
}

int main()
{
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    bubbleSort(arr, arr.size());

    for (int it : arr)
        cout << it << " ";
    return 0;
}