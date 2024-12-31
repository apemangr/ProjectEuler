#include <iostream> 
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main(){

  mp::cpp_int test{0}, result{0}, smallest = 1504170715041707;
 
  for (int i = 0; i < 10e9; i++)
    {
      test = (1504170715041707*i)%4503599627370517; 
      if(test < smallest && test > 0)
      {
        result += test;
        smallest = test;
      }
    }
cout << result;
}

