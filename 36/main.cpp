#include <iostream>
#include <string>
#include <math.h>
#include <bitset>
using namespace std;

bool isPalindrome(unsigned long long num)
{
   unsigned long long n, digit, rev = 0;
   n = num;
   do
     {
       digit = num % 10;
       rev = (rev * 10) + digit;
       num = num / 10;
     } while (num != 0);

     if (n == rev)
       return true;
     else
       return false;
}

unsigned long long int toBinary(int x)
{
  string s = bitset<128>(x).to_string();
  unsigned long long int binaryForm = stoull(s);
  return binaryForm;
}

int main()
{
  long int counter{0};
  for (int i = 1; i<=1000000; i++) {
    if (isPalindrome(i) && isPalindrome(toBinary(i))) {
      counter+=i;
      cout<<i<<" Número decimal\n"<<toBinary(i)<<" Número binario\n\n";
    }
    
  }
  cout<<"Answer: "<<counter<<endl;

}
