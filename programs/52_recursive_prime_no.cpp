// #include <iostream>
// using namespace std;
// bool prime(int n)
// {
//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     if (n == i)
//         return true;
// }
// int main()
// {
//     int n = 25;
//     if (prime(n))
//     {
//         cout << "prime no";
//     }
//     else
//     {
//         cout << "not prime no";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   for(int i=2; i<=sqrt(n); i++){
       if(n%i==0)
         return false;
   }

   return true;
}

// Driver Program
int main()
{
   int n = 7;
   if (isPrime(n))
      cout << "Prime Number";
   else
      cout << "Not Prime";

   return 0;
}