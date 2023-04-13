#include <stdio.h>
#include <stdlib.h>

int recursiveFunction (float n, float h1) {
	if (n >= 1) {
		h1+=(1/n);
		recursiveFunction(n-1, h1);
		return(h1);
	}
	if ((h1<1)||(n!=0)) {
		printf("Numero invalido");
		return(0);
	}
	printf("-> O resultado e %f\n", h1);
}	
 
 int main() {
 	float n=0, h2=0, i;
 	printf("Digite um numero inteiro: ");
 	scanf("%f", &n);
	
	recursiveFunction (n, 0);
	
	for(i=1; i<=n; i++) {
		h2+=(1/i);		
	}
	printf("-> O resultado e %f (TESTE)\n", h2);
}

