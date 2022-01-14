#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int fact(int n)
{
int count_num, result = 1;
 for (count_num  = 1; count_num <= n; count_num ++)
   result = result * count_num;
return result;
}

int nDigits(int x)
{
  int count{0};

  if (x<10 && x>0) {
    return 1;
  }else {
    while (x>0) {
      count++;
      x/=10;
    }
  }
  return count;
}

long int digitFact(int x)
{
  int temp{0}, original{x};
  long int result{0};
  int digits=nDigits(x);
  for (int i=0; i<digits; i++) {
    temp=x%10;
    result+=fact(temp);
    x/=10;
  }
  if(result == original)
    return result;
  else
    return 0;
  
}

int main()
{

  for (long long int i = 0; i<9999999; i++) {
    if (digitFact(i)>0) {
      cout<<digitFact(i)<<"\n";
    }
  }

  return 0;
}
