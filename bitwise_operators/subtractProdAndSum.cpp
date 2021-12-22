#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    cout << "Enter the no: ";
    cin >> n;
    int prod = 1;
    int sum = 0;

    while (n != 0)
    {

        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;

        n = n / 10;
    }

    int answer = prod - sum;
    cout << answer;
    return 0;
}