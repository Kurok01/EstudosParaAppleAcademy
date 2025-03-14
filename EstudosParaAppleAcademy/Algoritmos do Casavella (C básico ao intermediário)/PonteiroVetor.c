#include <stdio.h>

float media (int n, float *vnotas);

int main () {
	
	float vnotas[10];
	float media_notas;
	int i;
	
	for (i = 0; i < 10; i++) {
		
		printf ("Digite a nota do aluno: ");
		scanf ("%f", &vnotas[i]);
		
	}
	
	media_notas = media(10, vnotas);
	
	printf (" \nMedia = %.1f \n", media_notas);
	
	return 0;
}


float media (int n, float *vnotas) {
	
	float soma = 0, m = 0;
	int i;
	
	for (i = 0; i < n; i++) {
		
		soma += vnotas[i];
	}
	
	m = soma / n;
	
	return m;
}
