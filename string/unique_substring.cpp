#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://binarysearch.com/problems/Number-of-Unique-Character-Substrings

int solve(string s)
{
    int total = 0, in_a_row = 0;
    char previous = ' ';
    for (char c : s)
    {
        if (c != previous)
        {
            previous = c;
            in_a_row = 1;
        }
        else
        {
            in_a_row += 1;
        }
        total += in_a_row;
    }
    return total;
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}