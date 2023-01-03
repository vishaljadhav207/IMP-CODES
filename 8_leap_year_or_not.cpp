#include<iostream>
using namespace std;
int main()
{
int year;
cin>>year;
if(year%400==0 || year%4==0 && year%100!=0){
    cout<<"leap year";
}
else{
    cout<<"not a leap year";
}



return 0;
}