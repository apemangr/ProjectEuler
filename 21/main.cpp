#include<iostream>
#include<string>
#include<math.h>

int sum_of_divisors(int num)
{
    int sum=1;
    for(int i=2; i*i<=num; sum+=num%i?0:(i*i==num?i:i+num/i) ,i++);
    return sum;
}
using namespace std;

int main()
{
  int sum = 0;
  for (int i=1; i<=10000; i++) {
    
    int x = sum_of_divisors(i);
    if (sum_of_divisors(x)==i) {
      if(i != x)
	sum+=i;
    }
  }
  
    cout<<"Result \n~~~~~> "<<sum<<"\n";
  // int p,q,r,first,second;
  //   for (int n=2; n<5; n++) {
  //   p=3*pow(2,n-1)-1;
  //   q=3*pow(2,n)-1;
  //   r=9*pow(2,2*n-1)-1;
  //   first=pow(2,n)*p*q;
  //   second=pow(2,n)*r;
  //   cout<<"\nFirst: "<<first<<", second: "<<second<<"\n";
  //    }
}
