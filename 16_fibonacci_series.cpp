#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }
    int f1 = fib(n - 1) + fib(n - 2);
    return f1;
}

int main()
{
    int i;
    cin >> i;
    cout << fib(i) << endl;
    // return 0;
}