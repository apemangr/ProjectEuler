#include <iostream>

using namespace std;

int main()
{
  int smallest{0}, result{0}, i{1}, divisibleForTwenty{0};
  bool stop=false;
  

  do
    {
      for (int j{1}; j<21; j++)
	{
	  if(i%j == 0)
	    {
	      divisibleForTwenty++;
	    }
	}
      
      if (divisibleForTwenty == 20)
	{
	result=i;
	stop=true;
	}
      divisibleForTwenty=0;
      i++;
    }while(!stop);
  
  cout<<endl<<result<<endl;
}
