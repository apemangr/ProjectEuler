#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int x);

int main()
{
  for(int i{2}; i<600851475143; i++)
    {
      if(600851475143 % i == 0 && isPrime(i))
	{
	  cout<<i<<endl;
	}
    }
  
}

int isPrime(int x)
{
  int d{2};
  while(d<=sqrt(x))
    {
      if (x%d == 0)
	{
	  return 0;
	}
      d++;
    }
  return d;
}
