#include <iostream>
using namespace std;
int main()
{
    char str[30];
    cin >> str;
    int length = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        length++;
    }
    cout << "length of string is " << length;

    return 0;
}