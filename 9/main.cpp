#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  for(int i{1}; i<500; i++)
    {
      for(int j{1}; j<500; j++)
	{
	  for(int k{1}; k<500; k++)
	    {
	      if(pow(i,2)+pow(j,2)==pow(k,2) && i+j+k==1000)
		cout<<endl<<i<<" + "<<j<<" = "<<k<<endl;
	    }
	}
    }
  
}
