#include<iostream>
#include<math.h>

using namespace std;
int isPrime(int x);
int main()
{
  int primeNumber{0}, i{2};

  while(primeNumber<10001)
    {
      if(isPrime(i) != 0)
	{
	  cout<<"  "<<i<<endl;
	  primeNumber++;
	}
      i++;
    }

  cout<<i-1;
  
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
