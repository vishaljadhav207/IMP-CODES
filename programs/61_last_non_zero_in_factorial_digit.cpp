#include<iostream>// Factorial of 5 is (1*2*3*4*5 = 120) , hence the last non-zero digit is 2.
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;

}
int main(){
    int i;
    cin>>i;
    int a=factorial(i);
    while (a%10==0)
    {
       a=a/10;
    }
    
    cout<<a%10;
}