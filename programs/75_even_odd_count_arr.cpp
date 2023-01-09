#include<bits/stdc++.h>
using namespace std;

int main(){

   int arr[] = {1, 7, 8, 4, 5, 16, 8};
   int n = sizeof(arr)/sizeof(arr[0]);

   int even_count=0, odd_count=0;

   for(int i=0; i<n; i++){
     if(arr[i]%2==0)
       even_count++;

     else 
       odd_count++;
   }
   cout<<"Even Elements count : " <<even_count<< "\nOdd Elements count : " << odd_count;
}