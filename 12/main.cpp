#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int countDivisors(long long int n);

int main()
{

  long long int tempNumber{1};
  int divisor{0},biggestDivisor{0};
  
  for (long long int i{2}; i<46546456445464; i++)
    {

      if (countDivisors(tempNumber)>500)
	{
	  cout<<tempNumber<<" Tiene "<<countDivisors(tempNumber)<<" divisores"<<endl;
	  return 0;
	}
      tempNumber+=i;
      
      
    }
}

int countDivisors(long long int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
