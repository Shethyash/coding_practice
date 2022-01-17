#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/count-primes/
// Sieve of Eratosthenes : https://www.geeksforgeeks.org/sieve-of-eratosthenes/
// Time Complexity: O(nloglogn)
// Space Complexity: O(n)

int countPrimes(int n)
{
    int cnt = 0;
    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;

    for (int i = 2; i < n; i++)
    {

        if (v[i])
        {
            cnt++;
            for (int j = 2 * i; j < n; j += i)
            {
                v[j] = 0;
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    cout << countPrimes(n) << endl;
    return 0;
}