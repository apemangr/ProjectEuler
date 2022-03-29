#include <iostream>
using namespace std;

#define LIMIT_NUMBER  10000
#define LIMIT_ITER    50

unsigned long long reverse_number(unsigned long long numb)
{
unsigned long long reversed_number{0}, remainder{0};
  while (numb != 0)
    {
      remainder = numb % 10;
      reversed_number = reversed_number * 10 + remainder;
      numb /= 10;
    }
  return reversed_number;
}

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

bool isLychrel(unsigned long long numb)
{
 unsigned long long check;
  int iter{0};
  while (true)
    {
      iter++;
      if(iter >= LIMIT_ITER)
	return true;
      
      check = numb + reverse_number(numb);
      if(isPalindrome(check))
	return false;

      numb = check;
    }
}

int main()
{
  int counter{0};
  for(int i=1; i<=LIMIT_NUMBER; i++)
    if(isLychrel(i))
      counter++;
  cout<<"\nAsnwer: "<<counter<<endl;
  return 0;
}
