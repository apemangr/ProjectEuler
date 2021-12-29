#include <iostream>
using namespace std;
 
// Function to find length of period in 1/n
int getPeriod(int n)
{
   // Find the (n+1)th remainder after decimal point
   // in value of 1/n
   int rem = 1; // Initialize remainder
   for (int i = 1; i <= n+1; i++)
         rem = (10*rem) % n;
 
   // Store (n+1)th remainder
   int d = rem;
 
   // Count the number of remainders before next
   // occurrence of (n+1)'th remainder 'd'
   int count = 0;
   do {
      rem = (10*rem) % n;
      count++;
   } while(rem != d);
 
   return count;
}
 
// Driver program to test above function
int main()
{
  int greater{0},temp{0};
  for (int i = 1; i<1001; i++) {
    temp=getPeriod(i);
    if (temp>greater) {
      greater=temp;
      cout<<i<<endl;
    }
  }
  cout<<"^\n|\nL____ Respuesta\n";
  return 0;
}
