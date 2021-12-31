#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    // taking input n in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is " << ans << endl;

    // case 1
    // static memory allocation will clear automatically
    while (true)
    {
        int i = 5;
    }

    // case 2 = eat all heap memory
    // dynamic memory allocation will not clear automatically
    // needs to clear manually by delete
    // delete var;
    // delete [] arr;
    // while (true)
    // {
    //     int *ptr = new int;
    // }

    return 0;
}