#include <iostream>
using namespace std;
int power(int base, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int ans = base * power(base, p - 1);
    return ans;
}
int main()
{
    int base, p;
    cin >> base >> p;
    int u = power(base, p);
    cout << u;
    return 0;
}