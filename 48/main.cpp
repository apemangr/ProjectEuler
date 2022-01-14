#include <gmp.h>
int main() {

	unsigned int i ;
	mpz_t nm,rez;
	mpz_init(nm);
	mpz_init(rez);

	mpz_set_ui(rez,0);
	
	for (i = 1; i <= 1000; i++) {
		mpz_set_ui(nm, i);
		mpz_pow_ui(nm,nm, i);
		mpz_add(rez,rez,nm);


	}
	return gmp_printf("%Zd\n" , rez);
}
