
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int n) {
	if (n<2) return false;
	if (n==2) return true;
	for (int i=2;(float)i<=sqrt((float)n);i++) {
		if (n%i==0) return false;
	}
	return true;
}

int findIncrement (int n, int digit) {
	int increment=0;
	int placeValue=1;
	while (n>0) {
		if (n%10==digit) increment+=placeValue;
		n/=10;
		placeValue*=10;
	}
	return increment;
}

int checkSingleFamily (int n, int digit) {
	int increment=findIncrement(n, digit);
	int maxIncrements=9-digit;
	int primesInFamily=1;
	for (int i=1;i<=maxIncrements;i++) {
		int newValue=n+increment*i;
		if (isPrime(newValue)) primesInFamily++;
	}
	return primesInFamily;
}

bool digitInNumber (int n, int digit) {
	while (n>0) {
		if (n%10==digit) return true;
		n/=10;
	}
	return false;
}

bool checkPossibleFamilies (int n) {
	for (int digit=0;digit<10;digit++) {
		if (!digitInNumber(n,digit)) continue;
		if (checkSingleFamily(n,digit)>=8) {cout << n << " is the answer, lol.\n"; return true;}
	}
	return false;
}

int main () {

  cout<<
	// for (int i=1;i<1000000;i++) {
	// 	if (i%10000==0) cout << i/10000 << "% through.\n";
	// 	if (isPrime(i)) {
	// 		if (checkPossibleFamilies(i)) return 0;
	// 	}
	// }
}
