#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    
    int sum = 0;
    
    for (int i = num1; i <= num2; i++)
        sum = sum + i;
    
    cout << sum;
    
    return 0;
}
// Time complexity : O(N)
// Space complexity : O(1)