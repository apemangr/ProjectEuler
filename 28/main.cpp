#include <iostream>
#include <gmp.h>
using namespace std;

#define DIMENSION 1001

int main()
{
  

  // mpz_t resultado;
  // mpz_init(resultado);
  // mpz_set_ui(resultado,0);
  unsigned long long resultado{0};
  for (int i=3; i<=DIMENSION; i+=2) {
    for (int j=0; j<=3; j++) {
      //      mpz_add_ui(resultado,resultado,i*i-j*(i-1));
      resultado+=i*i-j*(i-1);
	}
  }
  // mpz_add_ui(resultado,resultado,1);
  // mpz_out_str(stdout,10,resultado);
  cout<<resultado;
  cout<<endl;
}
