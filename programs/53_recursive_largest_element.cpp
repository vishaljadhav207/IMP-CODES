// #include <bits/stdc++.h>
// using namespace std;

// // Recursive function
// int largest_element(int n, int arr[])
// {

//     if (n == 1)
//         return arr[0]; // Base condition

//     return max(arr[n - 1], largest_element(n - 1, arr));
// }
// // Driver code
// int main()
// {
//     int arr[] = {10, 45, 78, 34, 67};
//     int n = sizeof(arr) / sizeof(arr[0]);//n=5;
//     cout << "Largest Element is : " << largest_element(n, arr);
// }
// ========================================================
#include <iostream>
using namespace std;
int returnmax(int n, int arr[])
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max=arr[i];
    }

    return max;
}
int main()
{
    int arr[] = {10, 45, 78, 34, 67};
    int n = sizeof(arr) / sizeof(arr[0]); // n=5;
   cout<<returnmax(n,arr);
}