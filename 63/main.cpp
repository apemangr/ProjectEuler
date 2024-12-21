#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int c = 0;
    for (int i = 1; i <= 9; i++)
        for(int j = 1; j <= 22; j++)
            if(floor(1+j * log10(i)) == j)
                c++;

    cout << "Answer: " << c << endl;
}
