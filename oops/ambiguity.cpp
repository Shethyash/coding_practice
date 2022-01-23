#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

class A
{
public:
    void func()
    {
        cout << " I am A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << " I am B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    // obj.func();

    obj.A::func();
    obj.B::func();

    return 0;
}