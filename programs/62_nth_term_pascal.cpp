#include <bits/stdc++.h>
using namespace std;

//Function to print N-th row
void getrow(int N)
{
   int prev = 1;
   cout << prev;

   for (int i = 1; i <= N; i++) {
     int curr = (prev * (N - i + 1)) / i;
     cout << " " << curr;
     prev = curr;
   }
}

// Driver Program
int main()
{

  int N = 2;
  getrow(N);
  return 0;
}