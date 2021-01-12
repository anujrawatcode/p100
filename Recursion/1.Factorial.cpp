#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // base condition
    if (n == 0)
        return 1;
    // logic
    return n * fact(n - 1);
}
int main()
{
    int n = 5;
    cout << fact(n);
}