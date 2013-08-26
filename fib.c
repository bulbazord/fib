#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include "fib.h"

void usage()
{
	printf("Invalid paramters.\n");
	printf("fib: usage: fib [terms]\n");
	exit(EXIT_SUCCESS);
}

int generate(unsigned long terms)
{
	unsigned long i;
	mpz_t F_i;

	mpz_init(F_i);

	for (i = 0; i <= terms; i++) {
		mpz_fib_ui(F_i, i);
		gmp_printf("%Zd ", F_i);
	}

	return 0;

}

int main(int argc, char *argv[])
{
	if (argc != 2) {
		usage();
	}

	char *end;
	int terms = strtol(argv[1], &end, 10);

	generate(terms);
	printf("\n");

	return EXIT_SUCCESS;
}
