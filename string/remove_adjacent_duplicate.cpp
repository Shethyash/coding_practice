#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

string removeDuplicates(string s)
{
    string st = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (st.back() == s[i])
        {
            st.pop_back();
        }
        else
            st.push_back(s[i]);
    }
    return st;
}

int main()
{
    string s = "abbaca";
    //"azxxzy"
    cout << removeDuplicates(s) << endl;
    return 0;
}