// #include <iostream>
// #include <algorithm>
// using namespace std;

// void countDistinct(char arr[], int n)
// {

//     sort(arr, arr + n);

//     // Traverse the sorted array
//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;

//         // Move the index ahead whenever
//         // you encounter duplicates
//         while (i < n - 1 && arr[i] == arr[i + 1])
//         {
//             i++;
//             count++;
//         }

//         cout << arr[i] << ": " << count << endl;
//     }
// }

// // Driver program to test above function
// int main()
// {
//     char arr[] = "prepinsta is the best";
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // send n-1 to remove '\0'
//     countDistinct(arr, n - 1);
//     return 0;
// }
// ---------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

// Main function to run the program
int main()
{
    string arr = "PrepInsta is the best";
    int n = sizeof(arr) / sizeof(arr[0]);

    int visited[n];

    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (visited[i] != 1)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }

            cout << arr[i] << " : " << count << endl;
        }
    }

    return 0;
}