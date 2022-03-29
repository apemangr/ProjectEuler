#include <iostream>
using namespace std;

int main()
{
 int result{1};
  for (int i=3; i<=1001; i+=2) 
    for (int j=0; j<=3; j++) 
      result+=i*i-j*(i-1);
  cout<<"\nAnswer: "<<result<<"\n";
}
