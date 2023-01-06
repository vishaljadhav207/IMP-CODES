#include <bits/stdc++.h>
using namespace std;

void subsetSum(int arr[], int l, int r, int sum = 0)
{
    if (l > r)
    {
        cout << sum << " ";
        return;
    }

    subsetSum(arr, l + 1, r, sum + arr[l]);

    subsetSum(arr, l + 1, r, sum);
}

int main()//driver c
{
    int arr[] = {4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    subsetSum(arr, 0, n - 1);
    return 0;
}