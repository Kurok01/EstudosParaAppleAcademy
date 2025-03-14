#include <stdio.h>

int main () {
	
	int A[10] = { }, B[10] = { }, i;
	
	for (i=0; i <= 9; i++) {
		
		printf ("%d - Digite os dados para o vetor A nesta posicao: ", i);
		scanf ("%d", &A[i]);
	}
	
	for (i = 9; i >= 0; i--) {
		
		B[i] = A[i] * 10;
		printf ("Valor da posicao %d em A, na mesma posicao em B, so que decrescente: %d \n", i, B[i]);
	}
	
	return 0;
}
