#include <stdio.h>
#include <math.h>
#include "funcval.h"
#include "decifracodigo.h"

int main () {
	
	int qtdMensagem, b;
	char texto[51];
	int i, j;
	
	FILE *descriptografia;
	descriptografia = fopen("testeEscrita.txt", "w");
	
	scanf ("%d", &qtdMensagem);
	
	for (i = 0; i < qtdMensagem; i++) {
		
		scanf ("%d", &b);
		
		scanearCodigo (texto);
		
		decifraCodigo (texto, b);
		
		fprintf (descriptografia, "%s\n", texto);
	}
	
	fclose (descriptografia);
	
	descriptografia = fopen ("testeEscrita.txt", "r");
	
	for (i = 0; i < qtdMensagem; i++) {
		
		fgets (texto, 50, descriptografia);
		printf ("%s", texto);
	}
	
	fclose (descriptografia);
	
	return 0;
}
