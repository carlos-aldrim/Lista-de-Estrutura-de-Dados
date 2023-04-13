typedef struct{
	
	int matricula;
	char nome[50];
	float notaUm;
	float notaDois;
	float notaFinal;
	int qtdFaltas;
	int idade;
	
} Aluno;

int maisVelho(Aluno *aluno) {
	if(aluno[0].idade > aluno[1].idade) {
		return 1;
	}
	else {
		if(aluno[0].idade < aluno[1].idade) {
			return 2;
		}
		if(aluno[0].idade = aluno[1].idade) {
			return 0;
		}
	}
}

void media(Aluno *aluno, int tam);

int totalFalta(Aluno *aluno, int tam);

float mediaFaltas(Aluno *aluno, int tam);

void aproRepro(Aluno *aluno, int tam);
