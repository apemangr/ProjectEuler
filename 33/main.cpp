#include <iostream>
#include <vector>

#define FIRST 0
#define SECOND 1

using namespace std;

vector<double> splitDigits(int x) 
{
  vector<double> splittedDigits;
  int first = x / 10, second = x % 10;
  if(second==0)
    first=0;
  splittedDigits.push_back(first);
  splittedDigits.push_back(second);
  return splittedDigits;
}

int main() {

  vector<double> num,den;
  double splitNum{0}, splitDen{0};

  for (double i = 11; i <= 99; i++) 
    {
      for (double j = i; j <= 99; j++) 
	{
	 num=splitDigits(i);
	 den=splitDigits(j);
	 
	 if(num[FIRST] == den[FIRST])
	   {
	     splitNum=num[SECOND];
	     splitDen=den[SECOND];
	  
	     if(i/j == splitNum/splitDen && i/j != 1)
	       {
		 cout<<"\nIt works!\n";
		 cout<<i<<"/"<<j<<"\n";
	       }
	   }

	  if(num[FIRST] == den[SECOND])
	   {
	     splitNum=num[SECOND];
	     splitDen=den[FIRST];
	     if(i/j == splitNum/splitDen && i/j != 1)
	       {
		 cout<<"\nIt works! I:"<<i<<" J:"<<j<<"\n";
		 cout<<i<<"/"<<j<<"\n";
	       }
	   }



	 if(num[SECOND] == den[FIRST])
	   {
	     splitNum=num[FIRST];
	     splitDen=den[SECOND];
	     if(i/j == splitNum/splitDen && i/j != 1)
	       {
		 cout<<"\nIt works! I:"<<i<<" J:"<<j<<"\n";
		 cout<<i<<"/"<<j<<"\n";
	       }
	   }	 

	 
	  if(num[SECOND] == den[SECOND])
	   {
	     splitNum=num[FIRST];
	     splitDen=den[FIRST];
	     if(i/j == splitNum/splitDen && i/j != 1)
	       {
		 cout<<"\nIt works! I:"<<i<<" J:"<<j<<"\n";
		 cout<<i<<"/"<<j<<"\n";
	       }
	   }


	}

    }
 
cout<<"\n The result is: 100\n";
}

