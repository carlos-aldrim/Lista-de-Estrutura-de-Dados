#include <stdio.h>
#include <stdlib.h>

int digitos(int n) {
    static int i=0;
    if(n!=0) {
     	i ++;
        digitos(n/10);
    }
    return i;
}

int main()
{
  	int n, dig=0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    
    printf("\nQuantidade de digitos = %d", digitos(n));
    
    while(n!=0) {
    	dig++;
    	n=n/10;
	}
    
    printf("\nQuantidade de digitos = %d (TESTE)", dig);
}
