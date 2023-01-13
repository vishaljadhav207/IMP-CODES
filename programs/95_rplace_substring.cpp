#include <iostream>
using namespace std;
int main()
{
    string input1 ="prepinsta";
    string input2 = "ster";
    input1.replace(4, 5, input2);
    cout << "after replacement " << input1 << "\n";
    return 0;
}