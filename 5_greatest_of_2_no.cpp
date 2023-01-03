// #include <iostream>
// using namespace std;

// int main ()
// {
//     int num1, num2;
//     num1=75,num2=85;
 
//     if (num1 == num2)
//         cout << "both are equal"; else if (num1 > num2)
//         cout << num1 << " is greater than " << num2;
//     else
//         cout << num2 << " is greater than " << num1;

//     return 0;
// }
//------------------------------------------------------------------
#include <iostream>  
// function max available in here
#include <math.h>
using namespace std;

int main ()
{
    int num1, num2;
    num1=45,num2=14;
 
    if (num1 == num2)
        cout << "both are equal";
    else
        cout << max(num1,num2) << " is greater";

    return 0;
}