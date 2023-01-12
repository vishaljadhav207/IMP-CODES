#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void removechar(string s)
{
    for (int i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
        {
            s.erase(i, 1);
            i--;
        }
    }
    cout << s;
}
int main()
{
    string s = "P*re;p..ins't^a?";
    removechar(s);
    return 0;
}