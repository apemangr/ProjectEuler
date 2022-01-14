#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void primes(long long int N,  long long int s[]){
   vector <bool> prime(N+1, false);
   for (long long int i=2; i<=N; i+=2)
      s[i] = 2;
   for ( long long int i=3; i<=N; i+=2){
      if (prime[i] == false){
         s[i] = i;
         for ( long long int j=i; j*i<=N; j+=2){
            if (prime[i*j] == false){
               prime[i*j] = true;
               s[i*j] = i;
            }
         }
      }
   }
}


long int numberPrimeFactors( long long int N) {
    long long int s[N+1], counter{0};
  primes(N, s);
    long long int prime = s[N];
    long long int power = 1;
   while (N > 1){
      N /= s[N];
      if (prime == s[N]){
         power++;
         continue;
      }
      counter++;
      prime = s[N];
      power = 1;
   }
   return counter;
}

bool joeMamma(int num)
{
  int num2=num + 1, num3 = num + 2, num4 = num + 3;
  if (numberPrimeFactors(num) == 4)
    if(numberPrimeFactors(num2) == 4)
      if(numberPrimeFactors(num3) == 4)
	if(numberPrimeFactors(num4) == 4)
	  return true;

  return false;
}

bool joeMammaa(int num)
{
  int num2=num + 1, num3 = num + 2;
  if (numberPrimeFactors(num) == 3)
    if(numberPrimeFactors(num2) == 3)
      if(numberPrimeFactors(num3) == 3)
	  return true;

  return false;
}
int main() {

  //    cout<<numberPrimeFactors(134043);
  for (int i = 100000; i<191549; i++) {
    if(joeMamma(i))
      {
      cout<<"It works! at "<<i<<endl;
    break;
	
      }
  }
  return 0;
}
