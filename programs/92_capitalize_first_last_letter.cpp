#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{

    // Initializing variables.
    char str[100] = "Prep insta";
    int length = 0;
    // Calculating length.
    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (i == 0 || i == (length - 1)) // Converting character at first and last index to uppercase.
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ') // Converting characters present before and after space to uppercase.
        {
            str[i - 1] = toupper(str[i - 1]);
            str[i + 1] = toupper(str[i + 1]);
        }
    }

    cout << "String after capitalizing first and last letter of each word:\n"
         << str;
    return 0;
}
