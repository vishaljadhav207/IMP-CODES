#include<iostream>
using namespace std;
int main()
{
int temp,num,rem,sum=0;
cin>>num;
temp=num;
while (num>0)
{
   rem=num%10;
   sum=sum+(rem*rem*rem) ;
   num=num/10;
}
if(temp==sum){
    cout<<"armstrong number ";
}
else{
    cout<<"not an armstrong number ";
}

return 0;
}