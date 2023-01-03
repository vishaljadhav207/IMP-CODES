#include <iostream>
using namespace std;
int main()
{
    int num;
    num = 100;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        
            cout<<i<<" ";
        
    }
    return 0;
}