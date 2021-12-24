#include<iostream>
#include<string>

using namespace std;

int main()
{
  string number="93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864";
  long int result=0;
  string temp;
  for (int i=0; i<number.length(); i++) {
    cout<<number[i]<<" ";
    temp = number[i];
    result+= stoi(temp);
    temp = "";
  }
  cout<<"\n"<<result;
}
