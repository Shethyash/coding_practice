#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 2;

    while (i < n)
    {
        // if divisible then not prime
        if (n % i == 0)
        {
            cout << " Not prime for " << i << endl;
        }
        else
        {
            cout << " Prime for " << i << endl;
        }
        i += 1;
    }
    return 0;
}