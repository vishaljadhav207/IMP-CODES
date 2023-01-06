#include <bits/stdc++.h>
using namespace std;
int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a % b);
}
int main()
{
    int num1 = 3, num2 = 21, HCF;
    HCF = getHCF(num1, num2);
    int LCM = (num1 * num2) / HCF;
    cout << "LCM of " << num1 << " and " << num2 << " is " << LCM;
    return 0;
}