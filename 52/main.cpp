#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

bool isPermutation(string one, string two)
{
  int lenONE = one.length();
  int lenTWO = two.length();

  if(lenONE != lenTWO)
    return false;

  sort(one.begin(), one.end());
  sort(two.begin(), two.end());

  for(int i=0; i<lenONE; i++)
    if(one[i] != two[i])
      return false;
    
  return true;
}
  

int main()
{
  unsigned long int num2times{0}, num3times{0}, num4times{0}, num5times{0}, num6times{0};
  bool found = false;
  int cnt{1};
  while(!found)
    {
      num2times = cnt * 2;
      num3times = cnt * 3;
      num4times = cnt * 4;
      num5times = cnt * 5;
      num6times = cnt * 6;
      
      if(isPermutation(to_string(cnt), to_string(num2times)))
	if(isPermutation(to_string(cnt), to_string(num3times)))
	  if(isPermutation(to_string(cnt), to_string(num4times)))
	    if(isPermutation(to_string(cnt), to_string(num5times)))
	      if(isPermutation(to_string(cnt), to_string(num6times)))
		{
		  cout<<"\nAnswer: "<<cnt<<endl;
		  found = true;
		}
      cnt++;
    }
  
  return 0;
}
