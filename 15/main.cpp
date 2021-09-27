#include <cmath>
#include <iostream>
#include<iomanip>

using namespace std;

long double fac(int i);

int main()
{
  int m{20};
  int n{m+1};
  long double wholeThing=fac(n+m-1)/(fac(n-1)*fac(m));
  cout<<"\n~~~~~~~~~~~> "<<setprecision(15)<<wholeThing;
  

}

long double fac(int n){
    return tgamma(n + 1);  
}   
