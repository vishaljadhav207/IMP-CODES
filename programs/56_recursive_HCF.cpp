#include <bits/stdc++.h>
using namespace std;

int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a % b);
}

int main()
{
    int num1 = 96, num2 = 56, HCF;
    HCF = getHCF(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is " << HCF;
    return 0;
}