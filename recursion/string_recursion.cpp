#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void reverse(string &s, int start, int end)
{
    if (start >= end)
        return;
    swap(s[start++], s[end--]);
    reverse(s, start, end);
}

bool checkPalindrom(string &s, int start, int end)
{
    if (start >= end)
        return true;
    // if (s[start++] != s[end--])
    //     return false;
    // return checkPalindrom(s, start, end);
    return s[start] == s[end] && checkPalindrom(s, start + 1, end - 1);
}

int main()
{
    string s = "Yash";
    reverse(s, 0, s.length() - 1);
    cout << s << endl;

    string s1 = "madam";
    cout << checkPalindrom(s1, 0, s1.length() - 1) << endl;
    return 0;
}