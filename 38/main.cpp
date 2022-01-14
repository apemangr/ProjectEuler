#include <iostream>
#include <string>
#include <math.h>

long concat(int a, int b)
{
   long c = b;
   while (c > 0) {
    a *= 10;
    c /= 10;
   }
    return a + b;
}

long long int  nDigits(long long int x) {
  int count{0};
  if (x < 10 && x > 0) {
    return 1;
  } else {
    while (x > 0) {
      count++;
      x /= 10;
    }
  }
  return count;
}

bool isPandigital(unsigned long long n) {
    int digits = 0;
    int count = 0;
    int tmp;
 
    while (n > 0) {
        tmp = digits;
        digits = digits | 1 << (int)((n % 10) - 1);
        if (tmp == digits) {
            return false;
        }
 
        count++;
        n /= 10;
    }
    return digits == (1 << count) - 1;
}

using namespace std;

int main()
{
  unsigned long long answer{0}, product{0};
  unsigned long long tempNumb{0};
  string temp{""};
  unsigned long long digits{0};

  for (int i = 9; i < 999999; i++)
  {
    temp="";
    tempNumb=0;
    //    digits = 1;
    digits = 0;
    for (int j=1; digits<9; j++)
    {
      product=i*j;
      temp += to_string(product);
      tempNumb = stoull(temp);
      digits=nDigits(tempNumb);
      //  cout<<i<<" x "<<j<<" = "<<product<<endl;
      //      cout<<tempNumb<<" con "<<digits<<" digitos \n\n";
    }

    if (isPandigital(tempNumb) && tempNumb > 9)
    {
      cout<<"~~~~~~~~~~~~> It works with "<<tempNumb<<" I:"<<i<<"\n\n";
      if (tempNumb>answer) {
	answer = tempNumb;
      }
    }
    
  }

  cout<<"\n\nAnswer: "<<answer<<"\n";
  
  
  
  return 0;
}
