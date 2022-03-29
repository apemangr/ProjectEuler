#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{

  long double check{1}, primes{0}, not_primes{1}, den{0};
  bool found_ratio = false;
  int i{3}, files{3};
  while(!found_ratio)
    {
      cout<<primes/den<<endl;
      for (int j=1; j<2; j++) 
	{
	  check = i*i-j*(i-1);
	  if(isPrime(check))
	    {
	      //cout<<check<<" Is Prime\n";
	      primes++;
	    }
	  else
	    {
	      //cout<<check<<" Not Prime\n";
	      not_primes++;
	    }
	}
      primes += 2;
      not_primes++;
      
      den = primes + not_primes;
      
      if(primes/den  < 0.1 && files > 2)
	{
	  cout<<"Filas: "<<files<<"\tPrimes: "<<primes<<"\tNot Primes: "<<not_primes<<"\tDen: "<<den<<"\tResult= "<<primes/den<<endl;
	  found_ratio = true;
	  return 0;
	}
      files += 2;
      i+=2;
    } 

    
  return 0;
}
 
