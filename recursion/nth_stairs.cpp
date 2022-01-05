#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650

/*
Recursive solution for nth - stairs problem.
f(n) = f(n-1) + f(n-2)

recursive solution take more time than iterative solution.
and here we need to use dp to optimize the time complexity.
*/

int relation(int n)
{
    // base case
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return relation(n - 1) + relation(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << relation(n) << endl;
    return 0;
}