#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Initializing variable.
    char str[100];
    int i;

    // Accepting input.
    cout << "Enter the String: ";
    gets(str);

    // Initializing for loop.
    for (i = 0; str[i] != '\0'; i++)
    {
        // Toggling characters.
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    cout << "\nToggled string: " << str << endl; // Printing toggled string.

    return 0;
}