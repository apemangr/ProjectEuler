#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <math.h>
#include <string>
#include <vector>

// CREAR ALGORITMO GENERAL
using namespace std;

#define PLAYER1 true
#define PLAYER2 false
#define PAIR    2
#define TRIPLE  3

bool high_card(vector<string> vec)
{
  int p1_highest{0}, p2_highest{0};
  int temp;
  string buff;
  for (int i=0; i<5; i++) 
    {
      buff = vec[i][0];
      temp = stoi(buff);
      if(temp > p1_highest)
	p1_highest = temp;
    }

  for (int i=4; i<10; i++) 
    {
      buff = vec[i][0];
      temp = stoi(buff);
      if(temp > p2_highest)
	p2_highest = temp;
    }

  return p1_highest > p2_highest;
}

bool one_pair(vector<string> vec)
{
int temp;
string buff;
int p1_pair{0}, p1_cnt{0};
for(int j=0; j<4; j++)
  {
    buff = vec[j][0];
    temp = stoi(buff);

    p1_pair = temp;
    for(int i=j+1; i<=4; i++)
      {
	buff = vec[i][0];
	temp = stoi(buff);
	if(p1_pair == temp)
	  p1_cnt++;
	  
      }
  }

return false;
}

bool check_hands(vector<string> vec, int pos) {

  // Player One and Two initalization of hands
  vector<string> hands;

  // Check Royal Flush
  string buff_royal_flush;
  for(int i=pos; i<10; i++)
    hands.push_back(vec[pos+i]);
  int p1_royal_cnt{0}, p1_ten_pos{0};
  int p2_royal_cnt{0}, p2_ten_pos{0};
  return false;
}

int main() {
  vector<string> pokerHands;
  string bufferCopy;
  vector<string> test;
  ifstream file("test.txt");

  while (file >> bufferCopy) {
    pokerHands.push_back(bufferCopy);
  }
  check_hands(pokerHands, 0);
  return 0;
}
