#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/permutation-in-string/

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}
bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        count1[s1[i] - 'a']++;
    }

    int i = 0;
    int ws = s1.size();
    int count2[26] = {0};
    while (i < ws && i < s2.size())
    {
        count2[s2[i] - 'a']++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return 1;
    }

    while (i < s2.size())
    {
        count2[s2[i] - 'a']++;
        count2[s2[i - ws] - 'a']--;
        i++;
        if (checkEqual(count1, count2))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    cout << checkInclusion(s1, s2);
    return 0;
}