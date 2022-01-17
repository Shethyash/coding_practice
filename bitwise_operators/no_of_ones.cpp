#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    cout << "Enter the no: ";
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        // checking last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
    return 0;
}