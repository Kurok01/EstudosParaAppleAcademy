#include <stdio.h>

int main (void)
{
	char conceito;
	float nota;
	int numero;
	
	printf ("Informe a nota do aluno: \n");
	scanf ("%f", &nota);
	
	printf ("Nota do Aluno: %.1f \n", nota);
	
	printf ("Informe o numero de matricula do aluno: \n");
	scanf ("%d", &numero);
	
	printf ("Matricula: %d \n", numero);
	
	printf ("Informe o conceito do aluno: \n");
	scanf (" %c", &conceito);	
	
	printf ("Conceito: %c \n", conceito);
	return 0;
	
}


