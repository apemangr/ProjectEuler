#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int nDigits(int x)
{
  int count{0};
  if (x<10 && x>0) {
    return 1;
  }else {
    while (x>0) {
      count++;
      x/=10;
    }
  }
  return count;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

bool circularPrime(int x)
{
  if (!isPrime(x))
    return false;
  // cout<<"\n"<<x<<" entra\n";
  int temp{0},counter{0};
  long long int rotated{0};
  
  string together;
  vector<int> splitNumber;
  int digits=nDigits(x);
  if(digits == 1)
    return true;
  for (int i=0; i<digits; i++) {
    temp=x%10;
    splitNumber.push_back(temp);
    x/=10;
  }
  reverse(splitNumber.begin(), splitNumber.end());

  
  for(int q=0; q<digits-1; q++)
    {
      rotate(splitNumber.begin(), splitNumber.begin()+1,splitNumber.end());
     
      for (int splitNumber:splitNumber) {
    	together += to_string(splitNumber);
      }
      rotated = stoll(together);
      together="";
	
      if(isPrime(rotated))
	counter++;
    }

  if(counter==digits-1)
    return true;
  else
    return false;;
  
}

int main()
{
  int result{0};
  for (int j = 2; j<1000000; j++) {
    if (circularPrime(j)) {
      //cout<<j<<"\n\n";
      result++;
    }
    
  }
  cout<<"There are "<<result<<" circular primes under 1 million"<<endl;
  return 0;
}
