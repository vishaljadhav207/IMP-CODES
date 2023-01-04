#include <iostream>
using namespace std;
int main()
{
    int n = 1099888;
    int d = 8;
    int count=0;
    while (n)
    {

        int rem = n % 10;
        if (rem == d)
        {
            count++;
        }
        n = n / 10;
    }
    cout <<"the occurance of digit "<<d<<" is "<< count;
    return 0;
}

