#include <iostream>
using namespace std;
void reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << rev;
}
int main()
{
    int n;
    cin >> n;
    reverse(n);
}