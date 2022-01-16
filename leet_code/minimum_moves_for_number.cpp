#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/minimum-moves-to-reach-target-score/

int minMoves(int t, int m)
{
    int cnt = 0;
    while (m)
    {
        if (t == 1)
            return cnt;
        if (t % 2)
        {
            t--;
            cnt++;
        }
        else
        {
            t = t / 2;
            cnt++;
            m--;
        }
    }
    if (t > 1)
        cnt = cnt + (t - 1);
    return cnt;
}

int main()
{
    int target, maxDoubles;
    // 10 5 => 4
    cin >> target >> maxDoubles;
    cout << minMoves(target, maxDoubles) << endl;
    return 0;
}