#include <stdio.h>
#include <stdlib.h>

int main () {
	
	FILE *pont_arq;
	char c;
	
	pont_arq = fopen ("arquivo1.txt", "r");
	
	if (pont_arq == NULL) {
		
		printf ("Erro ao tentar abrir o arquivo!");
		exit (1);
	}
	
	printf ("Lendo e exibindo os dados do arquivo \n\n");
	
	do {
		
		c = fgetc (pont_arq);
		
		printf ("%c", c);
		
	} while (c != EOF);
	
	fclose (pont_arq);
	
	return 0;
}
