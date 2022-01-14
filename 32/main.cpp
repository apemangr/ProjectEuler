#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>

#define RIGHT 45

using namespace std;

bool isLucky( long long n)
{
    // Create an array of size 10 and initialize all
    // elements as false. This array is used to check
    // if a digit is already seen or not.
    bool arr[10];
    for (int i=0; i<10; i++)
        arr[i] = false;
 
    // Traverse through all digits of given number
    while (n > 0)
    {
        // Find the last digit
 long long digit = n%10;
 
        // If digit is already seen, return false
        if (arr[digit])
           return false;
 
        // Mark this digit as seen
        arr[digit] = true;
 
        // REmove the last digit from number
        n = n/10;
    }
    return true;
}

 long long concat(int x, int y, int z)
{
  string s1 = to_string(x);
  string s2 = to_string(y);
  string s3 = to_string(z);
  string s = s1 + s2 + s3;

 long long concatenated = stoull(s);

  return concatenated;
}


int sumDigits(int numb)
{
  int shadow{0},temp{0},total{0};
  
  if(numb==0)
    return 0;
  else 
    while (numb !=0) {    
      shadow=numb;
      
      shadow /= 10;
      temp=numb-shadow*10;
      // if (temp==0) {
      // 	numb=0;
      // 	return 0;
      // }
      total+=temp;
      numb=shadow;
    }
  return total;
}


int main()
{
  int result{0};
  long long temp{0};
  vector<int> numbers;

  for (int i = 1; i<5000; i++) {
    for (int j = i; j<5000; j++) {
      temp=concat(i, j, i*j);
      if (sumDigits(temp)==RIGHT && isLucky(temp)==true) {
	cout<<i<<" x "<<j<<" = "<<i*j<<"\n";
	numbers.push_back(i*j);
      }
    }
  }
  sort( numbers.begin(), numbers.end() );
  numbers.erase( unique( numbers.begin(), numbers.end() ), numbers.end() );
  for (int i=0; i<numbers.size(); i++) {
    result+=numbers[i];
  }
  cout<<"\nResult: "<<result<<endl;
  return 0;
}
