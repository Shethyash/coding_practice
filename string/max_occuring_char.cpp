#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

char getMaxOccuringChar(string &s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            arr[ch - 'a']++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            arr[ch - 'A']++;
        }
    }
    int maxi = 0;
    char ch = ' ';
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            ch = i;
        }
    }
    return 'a' + ch;
}

int main()
{
    string s;
    cin >> s;
    cout << getMaxOccuringChar(s);
    return 0;
}