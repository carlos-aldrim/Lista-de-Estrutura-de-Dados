#include "turma.h"
#include <stdio.h>

void media(Aluno *aluno, int tam){
	int i;
	float media;
	for(i = 0; i < tam; i++){
		media = (aluno[i].notaUm + aluno[i].notaDois + aluno[i].notaFinal)/3;		
		printf("Media aluno %d: %.2f\n", i+1, media);	
	}
}


int totalFalta(Aluno *aluno, int tam){
	int soma = 0, i = 0;
	
	for(i = 0; i < tam; i++){
		soma = soma + aluno[i].qtdFaltas;
	}
	return soma;
}

float mediaFaltas(Aluno *aluno, int tam){
	int soma = 0, i = 0;
	float media;
	
	while(i<2) {
		if(aluno[i].qtdFaltas <= 16) {
			printf("Aluno %d - Aprovado por Falta.\n", i+1);
			i++;
		}
		if(aluno[i].qtdFaltas > 16) {
			printf("Aluno %d - Reprovado por Falta.\n", i+1);
			i++;
		}
	}
	
	i=0;
	for(i = 0; i < tam; i++){
		soma = soma + aluno[i].qtdFaltas;
	}
	return (float)soma/tam;
}

void aproRepro(Aluno *aluno, int tam){
	int i, j = 0, z = 0, y = 0, aux = 0;
	float media;
	
	int matApro[tam];
	int matRep[tam];
	int matAf[tam];
	
	for(i = 0; i < tam; i++){
		media = (aluno[i].notaUm + aluno[i].notaDois + aluno[i].notaFinal)/3;	
		if((media >= 7)){
			matApro[j] = aluno[i].matricula;
			printf("Aluno %d - Aprovado por Nota.\n", i+1);
			j++;
		}else{
			if ((media < 7)&&(media >= 4)){
				printf("Aluno %d - Necessita fazer a Avaliaçao Final.\n", i+1);
				y++;
			}
			else {
				matRep[z] = aluno[i].matricula;
				printf("Aluno %d - Reprovado por Nota.\n", i);
				z++;
			}
		}	
	}
	
	aux=0;
	printf("\n\tLista dos Aprovados!!\t\n");
	while(aux != j){
		printf("Matricula: %d\n", matApro[aux]);
		aux++;
	}
	aux = 0;
	printf("\tLista dos Reprovados!\t\n");
	while(aux != z){
		printf("Matricula: %d\n", matRep[aux]);
		aux++;
	}	
	
}

