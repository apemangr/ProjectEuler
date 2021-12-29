#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

#define DEFICIENT 0
#define PERFECT   1
#define ABUNDANT  2

int sum_of_divisors(int num);
int numberClasification(int n);
int printPairsWithSum(vector<int> arr, int n, int sum);
void SumOfAbundant(int limit, std::vector<int> const& abunNumbers, std::vector<bool> &sumAbun){
    for(int a = 0; a < abunNumbers.size(); a++){
        for(int b = a; b < abunNumbers.size(); b++){
            if(abunNumbers[a]+abunNumbers[b] <= limit){
                sumAbun[abunNumbers[a]+abunNumbers[b]] = true;
            }
        else{
            break;
        }
        }
    }
}

int main()
{
  long int result=0;
  vector<int> numbersAbundant;
  vector<bool> abundantNumbers(28123, false);
  

  for (int i=1; i<28124; i++)
    {
    if(numberClasification(i) == ABUNDANT)
      {
	numbersAbundant.push_back(i);
      }
    }


  SumOfAbundant(28123, numbersAbundant, abundantNumbers);


    for(unsigned a = 0 ; a < abundantNumbers.size() ; a++){
        if(![a]){
        result += a;
        }
    }
    std::cout << result;

  
  return 0;
}

int sum_of_divisors(int num)
{
    int sum=1;
    for(int i=2; i*i<=num; sum+=num%i?0:(i*i==num?i:i+num/i) ,i++);
    return sum;
}

int numberClasification(int n)
{
  int classification=0;
  if (sum_of_divisors(n)<n) {
    classification = DEFICIENT;
  }else  if (sum_of_divisors(n)==n) {
    classification = PERFECT;
  }else  if (sum_of_divisors(n)>n) {
    classification = ABUNDANT;
  }
  return classification;
}
