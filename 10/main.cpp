#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int isPrime(int x);

int main()
{

  double ans{0};
  for(int i{2}; i<2000000; i++)
    {
      //   cout<<" ee "<<i<<" ";
      if(isPrime(i) !=0)
	{
	  cout<<"Summing "<<ans<<" with "<<i<<endl;
	  ans+=i;
	}
    }
  cout<<endl<<setprecision(15)<<ans<<endl;
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

