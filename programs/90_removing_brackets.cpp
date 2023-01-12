#include <iostream>
using namespace std;

int main()
{
//Initializing variables.
char str[100]="P(repi((nsta)", str_without_brackets[100];
int i=0, j=0 ;

//Iterating each character of string.
for(int i=0;str[i] != '\0';i++)
{
if(str[i] != '(' && str[i] != ')')//Removing brackets.
{
str_without_brackets[j++] = str[i];
}
}
str_without_brackets[j] = '\0';
//Printing result.
cout<<"The string after removing all the brackets is:\n"<<str_without_brackets;
return 0;
}