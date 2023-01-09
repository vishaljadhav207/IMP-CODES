#include <bits/stdc++.h>
using namespace std;

// Main function to run the program
int main()
{
    int arr[] = {10, 30, 10, 20, 40, 20, 50, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int visited[n];

    for (int i = 0; i < n; i++)
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
            if (count == 1)
                cout << arr[i] << " ";
        }
    }

    return 0;
}