#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool isPrime(int n) {
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

int nDigits(int x) {
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

long int remLeft(int numb) {
  int y = numb;
  int count = 0;

  while (y > 9) {
    y /= 10;
    ++count;
  }
  for (int i = 0; i < count; i++)
    y *= 10;
  numb -= y;
  return numb;
}

long int remRight(int numb) { return numb / 10; }

bool truncablePrime(int numb) {
  if (!isPrime(numb)) {
    return false;
  }

  int digits = nDigits(numb), temp{0}, counter{0};
  bool Left=false, Right=false;

  temp = numb;
  // Trunc Left
  for (int i = 0; i < digits - 1; i++) {
    temp = remLeft(temp);
    //    cout << temp << endl;
    if (isPrime(temp))
      counter++;
  }
  if(counter == digits - 1)
    Left = true;
  // Trunc Right
  temp = numb;
  counter = 0;
  if (Left) {
    for (int i = 0; i < digits - 1; i++) {
      temp = remRight(temp);
      if(isPrime(temp))
	counter++;
    }
    if(counter == digits -1)
      Right = true;
    
  }

  if(Left && Right)
    return true;
  else
    return false;
}

int main() {
  long int result{0};
  for (int i = 23; i<999999; i++) {
    if(truncablePrime(i)){
      cout<<"It works! "<<i<<endl;
      result += i;
    }
  }
  cout<<"\nAnswer: "<<result<<endl;
  
  // int temp{0}, numb{3797};
  // for (int i = 1; i<=3; i++) {
  //   numb=remRight(numb);
  //   cout<<numb<<endl;
  // }

  // cout<<"3797 Original"<<endl;
  // numb={3797};

  // for (int i = 1; i<=3; i++) {
  //   numb=remLeft(numb);
  //   cout<<numb<<endl;
  // }
  return 0;
}
