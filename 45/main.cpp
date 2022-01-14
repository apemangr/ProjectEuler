#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

bool isPentagonal(double number) {
    double penTest = (sqrt(1 + 24 * number) + 1.0) / 6.0;
    return penTest == ((int)penTest);
}


int main()
{
double result = 0;
int i = 143;
 
while (true) {
    i++;
    result = i * (2 * i - 1);
 
    if (isPentagonal(result)) {
        break;
    }
}
 printf("Answer: %f\n",result)  ;
  return 0;
}
