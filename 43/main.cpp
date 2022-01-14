#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

bool isPandigital(long long int x)
{
  unsigned char used[10] = {0};
  while (x > 0)
    {
      auto digit = x % 10;
      if(used[digit] == 1)
	return false;
      used[digit]++;
      x /= 10;
    }
  return true;
}

int main()
{
  long long int answer{0};
  string temp, a, b, c;
  string oneT, twoT, threeT, fourT, fiveT, sixT, sevenT;
  int    one,  two,  three,  four,  five,  six,  seven;

  for ( long long int i = 1234567890; i<=9876543210; i++) {
    if (isPandigital(i))
      {
	temp = to_string(i);

	a = temp[1];
	b = temp[2];
	c = temp[3];
	oneT = a+b+c;
	one  = stoi(oneT);

	a = temp[2];
	b = temp[3];
	c = temp[4];
	twoT = a+b+c;
	two = stoi(twoT);

	a = temp[3];
	b = temp[4];
	c = temp[5];
	threeT = a+b+c;
	three = stoi(threeT);

	a = temp[4];
	b = temp[5];
	c = temp[6];
	fourT = a+b+c;
	four = stoi(fourT);

	a = temp[5];
	b = temp[6];
	c = temp[7];
	fiveT = a+b+c;
	five = stoi(fiveT);

	
	a = temp[6];
	b = temp[7];
	c = temp[8];
	sixT = a+b+c;
	six = stoi(sixT);

	
	a = temp[7];
	b = temp[8];
	c = temp[9];
	sevenT = a+b+c;
	seven = stoi(sevenT);
	  
	if(one % 2 == 0)
	  if(two % 3 == 0)
	    if(three % 5 == 0)
	      if(four % 7 == 0)
		if(five % 11 == 0)
		  if(six % 13 == 0)
		    if(seven % 17 == 0)
		      answer += i;
	
      }
  }

  cout<<"\nAnswer: "<<answer<<endl;
  
  return 0;
}
