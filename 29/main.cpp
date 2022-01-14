#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <boost/multiprecision/cpp_int.hpp>

#define LIMIT 100

using namespace boost::multiprecision;
using namespace std;

cpp_int Power(cpp_int x, cpp_int y)
{
  cpp_int val=1;
  for (; y>0; y--) {
    val*=x;
  }
  return val;
}

int main()
{
  vector<cpp_int> numbers;
  for(int a=2; a<=LIMIT; a++)
    {
      for (int b=2; b<=LIMIT; b++)
	{
	  numbers.push_back(Power(a,b));
	}
    }

  sort(numbers.begin(),numbers.end());
  numbers.erase( unique( numbers.begin(), numbers.end() ), numbers.end() );
  cout<<"Distinct terms: "<<numbers.size();
  return 0;
}
