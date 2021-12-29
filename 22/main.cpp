#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int stringToChar( string y)
{
  char p[y.length()];
  int a,sum=0;
  for (int i = 0; i < sizeof(p); i++) {
    p[i] = y[i];
    a = p[i]-64;
    sum+=a;
  }
  return sum;
}

int main()
{
  unsigned long int result=0;
  ifstream datafile;
  datafile.open("names.txt");
  vector<string> names;
  string temp;
  while (datafile >> temp) {
    names.push_back(temp);
  }
  sort(names.begin(),names.end());
  datafile.close();

  for (int i = 0; i<names.size(); i++) {
    cout<<names[i]<<" suma "<<stringToChar(names[i])<<" multiplicado por su índice "<<i+1<<" es "<<stringToChar(names[i])*(i+1)<<"\n";
    result += stringToChar(names[i])*(i+1);
  }
  cout<<" Result\n~> "<<result;
  // cout<<stringToChar(names[1]);
  // string wena = names[1]; //ABBEY
  // char p[wena.length()];
  // int i,j=0;
  // for (i = 0; i < sizeof(p); i++) {
  //   p[i] = wena[i];
  //   //    cout << p[i];
  //   j=wena[i];
  //   j=j-64;
  //   //    cout<<j<<" ";
  // }
  
  // for (int i=0; i<names.size(); i++) {
  //   for (auto names: names[i]) {
  //   cout<<names<<" ";
  // }
  //   cout<<"\n";

  // }
    return 0;
}
