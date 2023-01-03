// (Sum of (1+2+3) of 6)/6= (Sum of (1+2+4+7+14) of 28)/28;
// 1==1;
#include <iostream>
using namespace std;
int friendlypair(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0)
            sum = sum + i;
    }
    return sum;
}
int main()
{
    int n1 = 6, n2 = 28;
    int sum1 = friendlypair(n1);
    int sum2 = friendlypair(n2);
    if (sum1 / n1 == sum2 / n2)
        cout << n1 << " & " << n2 << " are friendly pairs";
    else
        cout << n1 << " & " << n2 << " are not friendly pairs";
}