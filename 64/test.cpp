#include <iostream>
#include <cmath>

using namespace std;

int continuedFractionPeriod(int N) {
    int a0 = static_cast<int>(sqrt(N));
    if (a0 * a0 == N) return 0;

    int m = 0;
    int d = 1;
    int a = a0;

    int period = 0;

    do {
        m = d * a - m;
        d = (N - m * m) / d;
        a = (a0 + m) / d;
        period++;
    } while (a != 2 * a0);

    return period;
}

int main() {
    int countOddPeriods = 0;

    for (int N = 1; N <= 10000; N++) {
        int period = continuedFractionPeriod(N);
        if (period % 2 == 1) {
            countOddPeriods++;
        }
    }

    cout << "Answer: " << countOddPeriods << endl;

    return 0;
}
