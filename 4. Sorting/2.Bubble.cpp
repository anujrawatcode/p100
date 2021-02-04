// Bubble Sorting
// {2,10,8,7}

// {2,8,7,10}  1st Pass  1st largest in the end
// {2,7,8,10}  2nd Pass  2nd largest in the 2nd end
// {2,7,8,10}  3rd Pass  3rd largest in tne 3rd end

//  _ _
// {2,8,7,10}  1st Pass  1st largest in the end
//    _ _
// {2,8,7,10}
//      _ _
// {2,7,8,10}
//  _ _
// {2,7,8,10}  2nd Pass  2nd largest in the 2nd end
//    _ _ 
// {2,7,8,10}
//  _ _
// {2,7,8,10}  3rd Pass  3rd largest in tne 3rd end

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)         // Nos of Passes
        for (int j = 0; j < n - i - 1; j++) // traversal in each passes
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main()
{
    int arr[] = {1, 3, 2, 5, 4};
    int n = 5;
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i];
}