#include <bits/stdc++.h>
using namespace std;

int main()
{
    int month , year=2012;
    cin>>month;
    
    switch (month) {
    // Cases for 31 Days
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"Number of days is 31 Days.";
        break;
  
    // Cases for 30 Days
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"Number of days is 30 Days.";
        break;
  
    // Case for 28/29 Days
    case 2:
        if((year%400==0) || ((year%100!=0)&&(year%4==0)))
        cout<<"Number of days is 29";
        else cout<<"Number of days is 28";
        break;
  
    default:
        cout<<"Invalid Month.";
        break;
    }
    
    return 0;
}