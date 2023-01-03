#include<iostream>
using namespace std;

int main()
{
    int num1 = 12, num2 = 14, lcm;

    // calculating LCM here
    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1%i == 0 && num2%i == 0 )
            lcm = i;
        }

    // LCM formula
    lcm = (num1*num2)/lcm;

    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;
}