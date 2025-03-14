#include <stdio.h>

typedef struct {
	
	int matricula;
	float nota;
	
} tAluno;

int main () {
	
	tAluno a1;
	tAluno *ptrAluno = &a1;
	
	a1.matricula = 555;
	a1.nota = 8.0;
	
	printf ("Matricula: %d  Nota: %.2f", a1.matricula, a1.nota);
	
	(*ptrAluno).nota = 8.5;
	
	//Forma mais utilizada e mais rapida.
	ptrAluno -> matricula = 777;
	
	printf ("\n\nMatricula: %d   Nota: %.2f", ptrAluno -> matricula, (*ptrAluno).nota);
	
	return 0;
}
