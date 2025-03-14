#include <stdio.h>

int main () {
	
	int i, vetor[6];
	
	/* Inicializando o vetor com 0's */
	for (i = 0; i <= 5; i++) {
		
		vetor[i] = 0;
	}
	
	for (i = 0; i <=5; i++) {
		
		printf ("Vetor [%d] = %d \n", i, vetor[i]);
	}
	
	return 0; 
}
