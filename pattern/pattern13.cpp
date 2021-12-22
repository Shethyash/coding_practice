#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int n;
    cin >> n;
    cout << "New Pattern 1---------------------" << endl;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    cout << "New Pattern 2---------------------" << endl;
    row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    cout << "New Pattern 3---------------------" << endl;
    row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row - 1;
        while (col <= n)
        {
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    cout << "New Pattern 4---------------------" << endl;
    row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A';
        while (col <= n)
        {
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    cout << "New Pattern 4---------------------" << endl;
    row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space--)
        {
            cout << " ";
        }
        int col = 1;
        while (col <= row)
        {
            cout << col++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start--;
        }
        row++;
        cout << endl;
    }
    cout << "New Pattern 5---------------------" << endl;
    row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col++ << " ";
        }
        int space = 2 * (row - 1);
        while (space--)
        {
            cout << "*"
                 << " ";
        }
        col = col - 1;
        while (col)
        {
            cout << col-- << " ";
        }
        row++;
        cout << endl;
    }
    return 0;
}
