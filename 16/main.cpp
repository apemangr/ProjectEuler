#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double ans{0},temp{0};
  double power = pow(2,1000);
  string powerString = to_string(power),tempString{""};

  cout<<powerString<<endl;
  for(int i{0}; i <302; i++)
    {
      tempString=powerString[i];
      temp = stod(tempString);
      ans += temp;
    }
  cout<<ans;
}
