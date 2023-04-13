#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "turma.h"


int main() {
	
	int i = 0;
	float mediaAluno;
	Aluno turma[2];	
	
	for(i = 0; i < 2; i++){
		printf("Informacoes aluno %d: \n", i+1);
		printf("Nome: ");
		scanf(" %s", &turma[i].nome);
		printf("Matricula: ");
		scanf("%d", &turma[i].matricula);
		printf("Idade: ");
		scanf("%d", &turma[i].idade);
		printf("Nota um: ");
		scanf("%f", &turma[i].notaUm);
		printf("Nota dois: ");
		scanf("%f", &turma[i].notaDois);
		printf("Nota final: ");
		scanf("%f", &turma[i].notaFinal);
		printf("Quantidade de Faltas: ");
		scanf("%d", &turma[i].qtdFaltas);
	}
	
	printf("\n-> Resultado: \n");
	
	media(turma, 2);
	
	if(maisVelho(turma) != 0) {
		printf("O aluno %d e mais velho.\n", maisVelho(turma));
	}
	else {
		printf("As idades sao iguais.\n");
	}
	
	printf("Total de faltas: %d\n", totalFalta(turma, 2));
	printf("Media de faltas: %.2f\n", mediaFaltas(turma, 2));
	
	aproRepro(turma, 2);
	return 0;
}
