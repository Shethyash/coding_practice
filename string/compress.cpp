#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/string-compression/

int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    while (i < chars.size())
    {
        int j = i + 1;
        while (j < chars.size() && chars[i] == chars[j])
        {
            j++;
        }

        chars[ansIndex++] = chars[i];

        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    vector<char> chars{'a', 'b', 'b', 'b', 'b'};
    cout << compress(chars);
    return 0;
}