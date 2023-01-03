// //An Automorphic number is a special number, whose’s square ends with the
//  same digits as the number itself :6=36;
#include <iostream>
using namespace std;
int isautomorphic(int num)
{
    int sqr = num * num;
    while (num > 0)
    {
        if (num % 10 != sqr % 10)
        {
            return 0;
        }

        num = num / 10;
        sqr = sqr / 10;
    }

    return 1;
}
int main()
{
    int i;
    cin >> i;
    int sqr=i*i;
    int a = isautomorphic(i);
    if (a)
    {
        cout <<i<< " is automorphic: square is "<<sqr;
    }
    else
    {
         cout <<i<< " is not automorphic: square is "<<sqr;
    }
    return 0;
}