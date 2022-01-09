#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087

void subsetsHelper(string s, int index, string curr, vector<string> &res)
{
    // base case
    if (index == s.size())
    {
        res.push_back(curr);
        return;
    }

    // exclude case
    subsetsHelper(s, index + 1, curr, res);

    // include case
    char element = s[index];
    curr.push_back(element);
    subsetsHelper(s, index + 1, curr, res);
}

vector<string> subSequences(string &s)
{
    vector<string> res;
    string cur = "";
    subsetsHelper(s, 0, cur, res);
    return res;
}

int main()
{
    string s = "abc";
    vector<string> ans = subSequences(s);

    for (string i : ans)
    {
        cout << i << endl;
    }
    return 0;
}