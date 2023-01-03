// Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6

// The sum of these factors is 16 it is greater than 12
// So it is an Abundant number

// Some other abundant numbers:
// 18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120
#include <iostream>
using namespace std;

int main()
{
    int n = 12, sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum > n)
    {
        cout << n << " is an Abundant Number\n";
        cout << "The Abundance is: " << (sum - n);
    }
    else
        cout << n << " is not an Abundant Number\n";
}