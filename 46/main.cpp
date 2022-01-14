#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool IsPrimeNumber(int number)
{
  int divisionCount = 0, index_number = number;
  while (index_number > 0)
    {
      if (number % index_number == 0)
	divisionCount++;
      index_number--;
    }
  return (divisionCount == 2);
}

bool goldBach(int num)
{
  int prime{0}, result{0};
  for (int i = 1; i <= num; i++)
    {
      if(IsPrimeNumber(i))
	{
	  prime=i;
	  for (int j = 0; j<num/2; j++)
	    {
	      result = i+2*j*j;
	      if(result == num)
		{
		return true;
		}
	    }
	}
    }
  return false;
}

int main()
{

  for (int i = 3; i<99999; i++) {
    if (!IsPrimeNumber(i) && i % 2 != 0) 
      if(!goldBach(i))
	{
	  cout<<"Found "<<i<<endl;
	  break;
	  
	}
  }
  return 0;
}
