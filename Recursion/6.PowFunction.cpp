#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}
int main()
{
    int x = 2, n = 3;
    cout << power(x, n);
}