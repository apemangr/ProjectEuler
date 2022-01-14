#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool isPrime(long int n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;

  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
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


int main()
{
  
  int GOAT{0};
  for ( int i=2; i<9999999; i++) {
    if (isPrime(i)) {
      if (isPandigital(i)) {
	if (i>GOAT) {
	  GOAT=i;
	}
      }
    }
  }

  cout<<"\nAnswer: "<<GOAT<<endl;
  return 0;
}
