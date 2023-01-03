#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool perfectsqr(long double n)
{
    if (n >= 0)
    {
        long long sr = sqrt(n);
        return (sr * sr == n);
    }
    return false;
}
int main()
{
    long long n;
    cin >> n;
    int ans = perfectsqr(n);
    if (ans)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}