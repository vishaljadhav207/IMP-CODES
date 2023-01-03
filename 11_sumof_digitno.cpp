#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return n;
    }
    int ans = n % 10 + sum(n / 10);
    return ans;
}
int main()
{
    int i, j;
    cin >> i;
    j = sum(i);
    cout << j;
}
