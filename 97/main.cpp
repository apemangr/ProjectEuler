#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;


int main()
{
  namespace mp = boost::multiprecision;
  mp::cpp_int test =(28433*mp::pow(mp::cpp_int(2), 7830457)+1)/(10*2357197);
  cout<<test;
}
