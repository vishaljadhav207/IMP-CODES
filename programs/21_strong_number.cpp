#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = n * factorial(n - 1);
    return ans;
}
int strongfact(int num)
{
    int rem, temp, sum = 0;
    temp = num;
     // calculate 1! + 4! + 5!
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + factorial(rem);
        temp /= 10;
    }
    // returns 1 if both equal else 0
    return sum == num;
}

int main()
{
    int num;
    cin >> num;
    int a = strongfact(num);
    if (a)
    {
        cout << num << " is strong number";
    }
    else
    {
        cout << num << " is not strong number";
    }
}