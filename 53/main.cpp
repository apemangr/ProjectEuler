#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

cpp_int fact(int num)
{
    cpp_int fact = 1;
    for (int i = num; i > 1; --i)
        fact *= i;
    return fact;
}

int main()
{
  int counter{0};
  cpp_int temp{0};

  for(int i=0; i<=100; i++)
    for(int j=0; j<=100; j++)
      {
	temp=fact(i)/(fact(j)*fact(i-j));
	if(temp > 1000000)
	  counter++;
      }
  cout<<"\nAnswer: "<<counter<<endl;
}
