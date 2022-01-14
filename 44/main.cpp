#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  long sum{0}, res{0};
  vector<long long> pentagon_numbers;
  vector<long long>::iterator itSUM, itRES;
  
  // Crea los numeros pentogono
  for(int i = 1; i <= 2500; i++)
    pentagon_numbers.push_back((i*(3*i-1))/2);

  
  // Answer 
  // cout<<pentagon_numbers[2166]<<" "<<pentagon_numbers[1019]<<endl;
  for (int i = 0; i< pentagon_numbers.size(); i++)
    {
      for (int j = 0; j< pentagon_numbers.size(); j++) {
	sum = pentagon_numbers[j] + pentagon_numbers[i];
	res = pentagon_numbers[j] - pentagon_numbers[i];
	itSUM = find(pentagon_numbers.begin(), pentagon_numbers.end(), sum);
	itRES = find(pentagon_numbers.begin(), pentagon_numbers.end(), res);

	if (itSUM != pentagon_numbers.end())
	  if (itRES != pentagon_numbers.end())
	    std::cout <<"Pj:"<<j<<" Pi:"<<i <<" Element Found\n" << std::endl;
     
      
      }
    }
  
  return 0;
}
