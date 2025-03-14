#include <stdio.h>

struct tAluno {
	
	int matricula;
	float prova1;
	float prova2;
};

typedef struct tAluno tAluno;

int main () {
	
	tAluno aluno;
	float media;
	
	printf ("Informe o numero de matricula do aluno: ");
	scanf ("%d", &aluno.matricula);
	
	printf ("\nInforme a nota da primeira prova: ");
	scanf ("%f", &aluno.prova1);
	
	printf ("\nInforme a nota da segunda prova: ");
	scanf ("%f", &aluno.prova2);
	
	media = ((aluno.prova1) + (aluno.prova2)) / 2;
	
	printf ("Matricula: %d\n", aluno.matricula);
	
	printf ("Media: %.2f", media);
	
	return 0;
}
