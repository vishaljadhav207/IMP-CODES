#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 30, 10, 20, 40, 20, 50, 10};
    int dist_count = 0;
    int n = 8;
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        if (visited[i] != 1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    visited[j] = 1;
                }
            }
            dist_count++;
        }
    }
    cout << dist_count;
    return 0;
}