#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

#define MAX_ITER 1000

using namespace std;
using namespace boost::multiprecision;

int main()
{
  int counter{0};
  cpp_int num{3}, den{2}, num_next{0}, den_next{0};
  for(int i=1; i<=MAX_ITER; i++)
    {
      num_next = num + 2 * den;
      den_next = num + den;
      if(num_next.str().size() > den_next.str().size())
	counter++;
      num = num_next;
      den = den_next;
    }

  cout<<"\n\nAnswer: "<<counter<<endl;

  return 0;
}
