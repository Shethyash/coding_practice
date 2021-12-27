#include <iostream>
using namespace std;
#define endl "\n"

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    int i = 2;
    while (i < n)
    {
        // if divisible then not prime
        if (n % i++ == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is Prime" << endl;
    }
    else
    {
        cout << n << " Not prime" << endl;
    }
