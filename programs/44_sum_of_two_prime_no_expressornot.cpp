#include <iostream>
using namespace std;
bool prime_or_not(int a);
int main()
{
    int a, i;
    bool flag = false;
    cout << "Enter a positive  integer: ";
    cin >> a;
    for (i = 2; i <= a / 2; ++i)
    {
        if (prime_or_not(i))
        {
            if (prime_or_not(a - i))
            {
                cout << a << " = " << i << " + " << a - i << endl;
                flag = true;
            }
        }
    }
    if (!flag)
        cout << a << " can't be expressed as sum of two prime numbers.";
    return 0;
}
bool prime_or_not(int a)
{
    int i;
    bool is_prime = true;
    if (a == 0 || a == 1)
    {
        is_prime = false;
    }
    for (i = 2; i <= a / 2; ++i)
    {
        if (a % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}