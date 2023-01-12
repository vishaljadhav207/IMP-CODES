#include <iostream> 
#include <algorithm> 
using namespace std;

// Function to remove all spaces from a given string
string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}
// Driver program to test above function
int main()
{
    string str = "Pr epi  ns  ta ";
    str = removeSpaces(str);
    cout << str;
    return 0;
}