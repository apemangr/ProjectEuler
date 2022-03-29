#include <iostream>
#include <math.h>
using namespace std;
 

long long nDigits(long long n)
{
    if (n == 1)
        return 1;

    long double d = (n * log10(1.6180339887498948)) -
                    ((log10(5)) / 2);
 
    return ceil(d);
}
 

int main()
{
    long long i;
    for (i = 1; nDigits(i)<=1000; i++)
    cout << "Number of Digits in F("
         << i <<") - "
         << nDigits(i) << "\n";
 
}
