#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

cpp_int digitSum(string str)
{
  cpp_int sum = 0;
  for (unsigned long long i = 0; i < str.length(); i++)
    sum = sum + str[i] - 48;
  return sum;
}

cpp_int powerBoost (cpp_int x, cpp_int y)
{
  cpp_int temp;
  if (y == 0)
    return 1;
  temp = powerBoost (x, y / 2);
  if ((y % 2) == 0)
    return temp * temp;
  else
    return x * temp * temp;
}

int main()
{
  cpp_int maxSum{0};
  string temp;
  for (int a=1; a<100; a++) 
    for (int b=1; b<100; b++)
	if(digitSum(to_string(powerBoost(a, b))) > maxSum)
	  maxSum = digitSum(to_string(powerBoost(a, b)));
	
  cout<<"\nAnswer: "<<maxSum<<endl;
  return 0;
}
