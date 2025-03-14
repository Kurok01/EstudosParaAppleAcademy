#include <stdio.h>

int main () {
	
	struct ficha_aluno {
		
		int numero;
		char nome[40];
		float nota;
	};
	
	struct ficha_aluno aluno;
	
	printf ("Nome de aluno: ");
	fgets (aluno.nome, 40, stdin);
	
	printf ("Digite o numero do aluno: ");
	scanf ("%d", &aluno.numero);
	
	printf ("Digite a nota do aluno: ");
	scanf ("%f", &aluno.nota);
	
	printf ("\nNome do aluno .........: %s", aluno.nome);
	printf ("Numero do aluno .......: %d \n", aluno.numero);
	printf ("Nota do aluno .........: %.1f \n", aluno.nota);

	
	return 0;
}
