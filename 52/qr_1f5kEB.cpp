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
  string foo = "1342";
  string bar = "3142";

  cout<<isPermutation(foo, bar);
  
  return 0;
}
