#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633

int validchar(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
    {
        return 1;
    }
    return 0;
}
bool isPalindrome(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = tolower(s[i]);
        }
    }

    int i = 0, e = s.size() - 1;
    while (i <= e)
    {
        if (!validchar(s[i]))
        {
            i++;
            continue;
        }
        if (!validchar(s[e]))
        {
            e--;
            continue;
        }
        if (s[i++] != s[e--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    /**
     * codingninjassajNiNgNidoc
     * 5?36@6?35
     * aaBBa@
     */
    string s = "codingninjassajNiNgNidoc";
    cout << isPalindrome(s);
    return 0;
}