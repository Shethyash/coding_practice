#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/
// approach : https://drive.google.com/file/d/1oED1lbTobAWcHKdFSBRdZPZuA7RjcHnQ/view

void solve(string &digit, int index, vector<string> &ans, string temp, string mapping[])
{
    // base case
    if (index >= digit.size())
    {
        ans.push_back(temp);
        return;
    }

    // recursive case
    string chList = mapping[digit[index] - '0'];
    for (int i = 0; i < chList.length(); i++)
    {
        // temp.push_back(chList[i]);
        temp = temp + chList[i];
        solve(digit, index + 1, ans, temp, mapping);
        temp.pop_back();
    }
}
vector<string> letterCombinations(string &digits)
{
    if (digits.size() == 0)
        return {};
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    string temp = "";
    solve(digits, 0, ans, temp, mapping);
    return ans;
}
int main()
{

    string digits = "23";
    cout << "digits : ";
    cin >> digits;
    vector<string> ans = letterCombinations(digits);
    for (string i : ans)
    {
        cout << i << " ";
    }
    return 0;
}