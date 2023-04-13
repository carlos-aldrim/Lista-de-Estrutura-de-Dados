#include <stdio.h>
#include <stdlib.h>

int recursiveFunction (int Francisco, int Jose, int i){
	if (Francisco > Jose) {
	 	Francisco = Francisco + 2;
	 	Jose = Jose + 3;
	 	return i + recursiveFunction(Francisco, Jose, i + 1);
	}
	printf("Necessita de %d anos para que o Jose seja maior que o Francisco.\n", i);
 }
 
int main () {
	int Francisco=160, Jose=140;
	int i=0;
	recursiveFunction(Francisco, Jose, i);
	
	//TESTE//
	while(Francisco > Jose) {
		Francisco = Francisco + 2;
		Jose = Jose + 3;
		i++;
	}
	printf("Necessita de %d anos para que o Jose seja maior que o Francisco - (Teste).\n", i);
	
}

