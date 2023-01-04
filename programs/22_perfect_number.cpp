#include <iostream>
using namespace std;
int main()
{
    // A perfect number is a number in which the sum of the proper positive
    //  divisors of the number is equal to the number itself.
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";

    return 0;
}