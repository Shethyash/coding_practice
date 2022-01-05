#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/fibonacci-number/

int fibonacci(int n)
{
    // base case
    if (n == 0)
        return 1;
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fib(int n)
{
    int ans[n + 2];
    ans[0] = 0;
    ans[1] = 1;

    for (int i = 2; i <= n; i++)
        ans[i] = ans[i - 1] + ans[i - 2];

    return ans[n];
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}