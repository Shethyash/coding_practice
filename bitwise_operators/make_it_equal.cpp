#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int makeItEqual(int a, int b, int c)
{
    // Write your code here.
    if (a & b == c)
        return 0;
    else
    {
        int count = 0;
        while (a || b || c)
        {
            if (((a & 1) && (b & 1)) != (c & 1))
            {
                if (c & 1)
                {
                    if (((a & 1) || (b & 1)))
                        count++;
                    else
                        count += 2;
                }
                else
                {
                    count++;
                }
            }
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }
        return count;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << makeItEqual(a, b, c) << endl;
    return 0;
}