#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1>num2 & num1>num3){
cout<<"num 1 is greater";
    }
    else if(num2>num1 & num2>num3){
        cout<<"num 2 is greater";
    }
    else if(num3>num1 & num3>num2){
 cout<<"num 3 is greater";

    }
    return 0;

}