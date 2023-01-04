#include <iostream>
using namespace std;
// Initialize a variable sum = 0
// Extract each digit of num
// Add each digit to sum variable
// If at the end num is completely divisible by sum
// Then its a harshad’s number

int checkHarshad(int num){
    
    int sum = 0;
    int temp = num;
    
    while(temp != 0){
        sum = sum + temp % 10;
        temp /= 10;
    }
    
    // will return 1 if num is divisible by sum, else 0
    return num % sum == 0;
}

int main ()
{
    // int n=153;
    int n;
    cin>>n;

    if(checkHarshad(n))
        cout << n << " is a Harshad's number";
    else
        cout << n << " is not a Harshad's number";

    return 0;
}