#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n < 1)
        return;
    cout << n;
    return print(n - 1);
}
int main()
{
    int n = 5;

    print(n);
    return 0;
}