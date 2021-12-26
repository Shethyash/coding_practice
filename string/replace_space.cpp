#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172

string replaceSpaces(string &s)
{
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}
string replaceInSpaces(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            s.replace(i, 1, "@40");
        }
    }
    return s;
}

int main()
{
    string s = "My name is yash";
    // cin >> s;
    cout << replaceSpaces(s) << endl;
    cout << replaceInSpaces(s) << endl;
    return 0;
}