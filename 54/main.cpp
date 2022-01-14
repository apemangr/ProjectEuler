#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;
// Westa funcion esta chida
bool high_card(vector<string> vector, int position) 
{
  // Player One
  return false;
  
}

int main()
{
  vector<string> pokerHands;
  string bufferCopy;
  vector<string> test;
  test.push_back("123");
  cout<<test[0][0];
  high_card(test, 5);
  ifstream file("test.txt");
  
  while(file >> bufferCopy)
    { 
      pokerHands.push_back(bufferCopy);
    }
  
  return 0;
}
