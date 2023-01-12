// #include <iostream>
#include <bits/stdc++.h>
// #include<string>
using namespace std;
string ispalindrome(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if(s==p)
    {
        return "yes it is palindrome";
    }
    else{
        return "NO it is not palindrome";
    }
}
int main()
{
    // string s="ABCDCBA";
    string s;//user input
    cin>>s;
    cout<<ispalindrome(s);
    return 0;
}
// C program to illustrate
// strcmp() function
// #include<stdio.h>
// #include<string.h>

// int main()
// {

// 	char leftStr[] = "g f g";
// 	char rightStr[] = "g f g";

// 	// Using strcmp()
// 	int res = strcmp(leftStr, rightStr);

// 	if (res==0)
// 		printf("Strings are equal");
// 	else
// 		printf("Strings are unequal");

// 	printf("\nValue returned by strcmp() is: %d" , res);
// 	return 0;
// }
