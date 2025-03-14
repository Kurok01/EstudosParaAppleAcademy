#include <stdio.h>

int main () {
	
	
	FILE *pont_arq;
	char palavra [20];
	
	pont_arq = fopen ("arquivo_palavra.txt", "w");
	
	if (pont_arq == NULL) {
		
		printf ("Erro na abertura do arquivo");
	}
	
	printf ("Digite uma palavra para ser gravada no arquivo: ");
	scanf ("%s", palavra);
	
	fprintf (pont_arq, "%s", palavra);
	fclose (pont_arq);
	
	printf ("Palavra Gravada");
	
	return 0;
}
