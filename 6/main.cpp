#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
  int sumSquares{0}, squaresSums{0}, acum{0};

  for(int i{1}; i < 100+1; i++)
    {
      squaresSums+=i;
      sumSquares += pow(i,2);
    }
  squaresSums=pow(squaresSums,2);
  cout<<" "<<squaresSums<<" - "<<sumSquares<<" = "<<squaresSums-sumSquares;

}
