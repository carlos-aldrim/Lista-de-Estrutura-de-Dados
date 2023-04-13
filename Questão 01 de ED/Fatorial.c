#include <stdio.h>
#include <stdlib.h>

float recursiveFunction(int n) {
	if ((n==0)||(n==1)) {
	  	return (1);
	}
	else {
		return (n * recursiveFunction(n-1));
	}
}

int main(void)
{
	int n=5;

	if (n<=-1) {
	  	printf("Numero invalido");
	  	return 0;
	}
	else {
		printf("Fatorial de %d = %.0f", n, recursiveFunction(n));
	}
}

