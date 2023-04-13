#include <stdio.h>
#include <stdlib.h>

float fatorial(int n) {
	float fator=1;
	int i;
	if(n==0) {
		return 0;
	}
	else {
		for(i=1; i<=n; i++) {
			fator = fator*i;
		}
		fator=fator/(n);
	}
	return fator + fatorial(n-1);
}

int main() {
	int n=0, resultado=0, fat=1, i;
	printf("Digite um numero: ");
	scanf(" %d", &n);
	
	for(i=1; i<=n; i++) {
		fat = fat * i;
		resultado += fat/i;
	}
	
	printf("\nResultado: %.0f", fatorial(n));
	printf("\nResultado: %d (TESTE)", resultado);
}
