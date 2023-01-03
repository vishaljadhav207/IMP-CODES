// #include <iostream>
// using namespace std;
// int binary2decimal(int n)
// {
//     int p = 1;
//     int dec = 0;
//     while (n != 0)
//     {
//         int lastdigit = n % 10;
//         dec = dec + lastdigit * p;
//         p = p * 2;
//         n = n / 10;
//     }

//     return dec;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << binary2decimal(n) << endl;
// }
#include<bits/stdc++.h>
using namespace std;

// function to convert binary to decimal
int getDecimal(long long num)
{
    int i = 0, decimal= 0;
    
    //converting binary to decimal
    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(2,i);

        num /= 10;
        i++;
    }
    return decimal;
}

// main program
int main()
{
    // long used rather than int to store large values
    // Ex : int wont store 111111111111 (12 digits) as
    // limit for int is 2147483647 (10 digits)
    long long binary = 11011;
    
    cout << getDecimal(binary);   
    
    return 0;
}