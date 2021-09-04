#include <iostream>

using namespace std;
int invertNumber(int number);

int main()
{
  int foo{0},biggie{0};
  for(int i{1}; i<999; i++)
    {
      for(int j{1}; j<999; j++)
	{
	  foo=i*j;
	  if(foo == invertNumber(foo) )
	    {
	    if(foo>biggie)
	      biggie = foo;
	    }  
	}
    }

  cout<<"El numero es: "<<biggie;
  
}


int invertNumber(int number) {
  int reversedNumber{0}, remainder{0};
  while(number != 0) {
        remainder = number%10;
        reversedNumber = reversedNumber*10 + remainder;
        number /= 10;
    }
  return reversedNumber;
} 
