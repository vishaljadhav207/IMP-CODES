// #include <iostream>
// using namespace std;

// int getReverse(int num, int rev){
//     if(num == 0)
//         return rev;
    
//     int rem = num % 10;
//     rev = rev * 10 + rem;
    
//     return getReverse(num / 10, rev);
// }

// //main program
// int main ()
// {
//     int num, rev = 0;
//     num=1234;
//     cout << "\n The number is"<<num; 
       
//     cout << "\nReverse: " << getReverse(num, rev);
// }
#include<iostream> 
using namespace std;

//main program
int main ()
{
//variables initialization
int num, reverse = 0, rem;

cout <<"Enter a number: "; 
cin >> num;

//loop to find reverse number
while(num != 0)
{
rem = num % 10;
reverse = reverse * 10 + rem;
num /= 10;
};

//output
cout <<"Reversed Number: "<<reverse;

return 0;
}