#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int modularExponentiation(int x, int n, int m)
{
    // Write your code here.
    int result = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            result = (1LL * result * (x % m)) % m;
        }
        x = (1LL * (x % m) * (x % m)) % m;
        n = n >> 1;
    }
    return result;
}

int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    cout << modularExponentiation(x, n, m);
    return 0;
}