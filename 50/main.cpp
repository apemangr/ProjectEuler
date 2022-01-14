
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

#define LIMIT 1000000
#define INIT 2

vector<int> primes;
 
vector<int> SOE(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=INIT; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=INIT; p<=n; p++)
       if (prime[p])
          primes.push_back(p);
    return primes;
}

long long int primeSum(int num)
{
  long long int sum{0};
  int answer{0};
  for(int i=0; primes[i]<num; i++)
    {
      sum=0;
      for (int j=0; sum<num; j++)
	{
	  sum += primes[i+j];
	  if(sum == num)
	    {
	      answer = j+1;
	      return answer;
	    }
	}
    }
  return 0;
}
int main()
{
  primes = SOE(LIMIT);
  int answer{0},pos{0};
  for (int i=0; i<=primes.size(); i++)
    {
      if(primeSum(primes[i]) > answer && primeSum(primes[i]) != 0)
	{
	  answer=primeSum(primes[i]);
	  pos=primes[i];
	}
    }

   cout<<"\nAnswer: "<<pos<<endl;
}
