#include <bits/stdc++.h>//24=2 2 2 3
using namespace std;
void primeFactors(int n)
{
    int c = 2;
    while (n > 1)
    {
        if (n % c == 0)
        {
            cout << c << " ";
            n /= c;
        }
        else
            c++;
    }
}
/* Driver code */
int main()
{
    int n = 24;
    primeFactors(n);
    return 0;
}
