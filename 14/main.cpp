#include<iostream>
#include<math.h>
using namespace std;

int main()
{

 long long int biggestChain{0}, chainNumber{0}, temp{0};

  for(int i{2}; i<1000000; i++)
    {
      temp = i;
      chainNumber = 0;
      while(temp > 1)
	{
	  if(temp & 1)
	    {
	      temp = temp*3+1;
	      chainNumber += 1;
	      
	    }else
	    {
	      temp /= 2;
	      chainNumber +=1;
	     }
	}
      if (chainNumber > biggestChain)
	{
	  biggestChain = chainNumber;
	}
    }
  cout<<"Ans -> "<<biggestChain<<endl;
}
