#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
  namespace mp = boost::multiprecision;
  string preResult;
  mp::cpp_int temp;
  mp::cpp_int test =(28433*mp::pow(mp::cpp_int(2), 7830457)+1);
  for(int i = 1; i <= 10; i++)
    {

      temp = test % 10;
      preResult.append(to_string(temp));
      test /= 10;
    }
  reverse(preResult.begin(), preResult.end());
  cout << preResult;
}
