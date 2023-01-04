#include <iostream>
using namespace std;

int main()
{
    int num = -15;

    // Condition to check if the 0, positive or negative

    if (num == 0)
        cout << "Zero";
    else
        (num > 0) ? cout << "Positive" : cout << "Negative";

    return 0;
}