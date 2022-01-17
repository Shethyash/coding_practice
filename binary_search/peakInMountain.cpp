#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int find_pivot(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (v[mid] < v[mid + 1])
            s = mid + 1;
        else
            e = mid;

        mid = (s + e) / 2;
    }
    return s;
}

int main()
{
    vector<int> v = {1, 2, 3, 6, 7, 4, 5, 8, 9, 10};
    cout << find_pivot(v);
    return 0;
}
