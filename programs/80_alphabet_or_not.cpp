#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
        cout<<"The entered character  is an Alphabet";
    else
        cout<<"The entered character  is not an Alphabet";
}