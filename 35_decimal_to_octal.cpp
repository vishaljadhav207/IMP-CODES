#include<iostream>
using namespace std;
 
void convertBinary(int num)
{
    // creating an array to store binary equivalent
    int binaryArray[100];
 
    // using i to store binary bit at given array position
    int i = 0;
    while (num > 0) {
 
        // resultant remainder is stored at given array position
        binaryArray[i] = num % 8;
        num = num / 8;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryArray[j];
}
 
int main()
{
    int n = 148;
    convertBinary(n);
    return 0;
}