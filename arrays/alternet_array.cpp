#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 8;
    for (int i = 0; i + 1 < n; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    for (auto x : arr)
        cout << x << " ";
    return 0;
}