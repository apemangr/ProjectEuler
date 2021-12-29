#include <iostream>
#include <string>
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

  long int expression{0};
  int n{0}, numeroN{0}, coeficientes{0};
  
  for (int a=-999; a<999; a++)
    {
      for (int b=-1000; b<=1000; b++)
	{
	  n=0;
	  expression=pow(n,2)+a*n+b;
	  //	cout<<"Valor a:"<<a<<" Valor b:"<<b<<"\n";
	  if (isPrime(expression)) {
	    //	  cout<<"Es primo "<<expression<<"\n";
	    for (n=0; isPrime(expression); n++) {
	      expression=pow(n,2)+a*n+b;
	      //	    cout<<n<<"^2+"<<a<<"*"<<n<<"+"<<b<<" == "<<expression<<"\n";
	      if (n>numeroN)
		{
		  numeroN=n;
		  coeficientes=a*b;
		}
	    }
	  }
	}
    }
  cout<<"\nResultado: "<<coeficientes<<"\n";
  return 0;
}
