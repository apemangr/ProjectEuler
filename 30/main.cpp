#include <iostream>
#include <math.h>

using namespace std;

int fith(int numb)
{
  int shadow{0},temp{0},total{0};
  
  if(numb==0)
    return 0;
  else 
    while (numb !=0) {    
      shadow=numb;
      
      shadow /= 10;
      temp=numb-shadow*10;
      total+=pow(temp,5);
      numb=shadow;
    }
  return total;
}

int main()
{
  int result{0};
  for (int i =2; i<9999999; i++) {
    if (fith(i)==i) {
      cout<<i<<endl;
      result+=i;
    }
  }
  cout<<"\nResult: "<<result<<"\n";
}
