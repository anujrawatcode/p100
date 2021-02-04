#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    if (n == 0)
        return;
    print(arr, n - 1);
    cout << arr[n - 1];
    
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, n);
}