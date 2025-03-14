#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	FILE *pont_arq;
	char palavra[40];
	int i;
	int tamanho;
	
	pont_arq = fopen ("arquivo1.txt", "w");
	
	if (pont_arq == NULL) {
		
		printf ("\nErro ao tentar abrir o arquivo.");
		exit (1);
	}
	
	printf ("Digite a frase a ser gravada no arquivo: ");
	gets (palavra);
	
	tamanho = strlen (palavra);
	
	for (i = 0; i < tamanho; i++) {
		
		fputc (palavra[i], pont_arq);
	}
	
	fclose (pont_arq);
	
	return 0;
}
