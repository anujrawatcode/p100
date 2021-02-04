#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 5, 4};
    int n = 5;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i];

    vector<int> vec{1, 3, 2, 5, 4};
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
        cout << vec[i];
}