#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void reverseS(string &s)
{
    int i = 0, e = s.size() - 1;
    while (i <= e)
    {
        swap(s[i++], s[e--]);
    }
}

int main()
{
    string s = "My name is yash";
    string temp = "", final = "", final2 = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            final2 = temp + " " + final2;
            reverseS(temp);
            final = final + " " + temp;
            temp = "";
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    cout << s << endl;
    cout << final << endl;
    cout << final2 << endl;
    return 0;
}