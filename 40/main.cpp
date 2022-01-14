#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
  int foo;
  string bar;
  int result{1};

  for (int i = 1; i<=555550; i++) {
    bar += to_string(i);
  }

  result *= (int)bar[0]      - '0';
  result *= (int)bar[9]      - '0'; 
  result *= (int)bar[99]     - '0'; 
  result *= (int)bar[999]    - '0'; 
  result *= (int)bar[9999]   - '0'; 
  result *= (int)bar[99999]  - '0'; 
  result *= (int)bar[999999] - '0';
  
  cout<<"\nAnswer: "<<result<<endl;
  return 0;
}
