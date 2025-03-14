#include <stdio.h>

int main () {
	
	int x=0, *ptrx, **pptrx;
	
	ptrx = &x;
	pptrx = &ptrx;
	
	
	printf ("\nValor de x: %d \n", x);
	printf ("Endereco de x: %x\n\n", &x);
	
	//Aumentando o valor da variavel X atraves do ponteiro
	*ptrx += 10;

	printf ("Endereco apontado por ptrx: %x\n", ptrx);
	printf ("Valor de x apontado por ptrx: %d\n", *ptrx);
	printf ("Endereco de ptrx: %x\n\n", &ptrx);
	
	**pptrx += 10;
	printf ("Endereco apontado por pptrtx: %x\n", pptrx);
	printf ("Valor de ptrx apontado por pptrx: %d\n", **pptrx);
	printf ("Endereco de pptrx: %x\n", &pptrx);
	
	return 0;
}
