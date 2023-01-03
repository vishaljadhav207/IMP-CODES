#include<iostream>
#include<math.h>
using namespace std;
int ocataltodec(int n)
{
    int i=0,dec=0;
    while (n>0)
    {
        int rem=n%10;
        dec=dec+rem*pow(8,i);
        n/=10;
        i++;
    }
    return dec;
    

}
int main(){
    int n=462;
    int ans=ocataltodec(n);
    cout<<ans;
}