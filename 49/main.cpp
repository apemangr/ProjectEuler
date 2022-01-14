#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;

int numberOfDigit(int N)
{
    int digit = 0;
    while (N > 0) {
        digit++;
        N /= 10;
    }
    return digit;
}

 bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool primePermutation(int num)
{
  string intTOstr=to_string(num);
  int one1, one2, one3, one4, two1, two2, two3, two4, three1, three2, three3, three4;
  int Perm2 = num + 3330, Perm3 = Perm2 + 3330;
  string temp;
  temp=intTOstr[0];
  one1=stoi(temp);
  temp=intTOstr[1];
  one2=stoi(temp);
  temp=intTOstr[2];
  one3=stoi(temp);
  temp=intTOstr[3];
  one4=stoi(temp);
  array<int,4> first ={one1, one2, one3, one4};
  array<int,4> second = 
  return false;
}


int main()
{
  int foo [4]= {3,4,5,7};
  vector<int> bar;
  for(int i = 0; i<23; i++)
    {
  next_permutation(foo, foo+4);
  bar.push_back(foo[0]*1000+foo[1]*100+foo[2]*10+foo[3]);
    }
  for(int bar:bar)
    {
      if(isPrime(bar))
	cout<<bar<<endl;
    }
  
  return 0;
}
