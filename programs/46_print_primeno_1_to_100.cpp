// #include <iostream>
// using namespace std;
// int main(){
// for(int j=2;j<=100;j++)
// {
//     int i=2;
//     for(;i<=j-1;i++)
//     {
//         if(j%i == 0)
//             break;
//     }

//     if(i==j && i != 2)
//         cout<<j<<endl;
// }
// }
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    for (n = 1; n <= 100; n++)
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)

                break;
        }
        if (i > n / 2)

            cout << n << " ";
    }

    return 0;
}