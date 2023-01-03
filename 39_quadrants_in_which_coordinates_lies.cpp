#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
cout<<"inserted values of x and y are in :";

if(x>0&&y>0){
cout<<"I quadrants";
}
else if(x<0&&y>0){
cout<<"II Quadrants";
}
else if(x<0&&y<0){
    cout<<"II quadrents";
}
else if(x>0&&y<0){
    cout<<"II quadrants";
}

}