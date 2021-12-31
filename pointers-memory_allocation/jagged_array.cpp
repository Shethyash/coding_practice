#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

/*
    Jagged array is array of arrays such that member arrays can be of different sizes,
    i.e., we can create a 2-D array but with a variable number of columns in each row.
    These type of arrays are also known as Jagged arrays.
*/
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int **arr = new int *[n];
    int *ptr = new int[n];
    for (int j = 0; j < n; j++)
    {
        cin >> ptr[j];
    }
    cout << "Enter element for each row: " << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[ptr[i]];
        for (int j = 0; j < ptr[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ptr[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] ptr;
    delete[] arr;

    return 0;
}