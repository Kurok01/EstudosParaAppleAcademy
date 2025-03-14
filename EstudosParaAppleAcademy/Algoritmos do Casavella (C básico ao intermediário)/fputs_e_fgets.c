#include <stdio.h>
#include <stdlib.h>

int main () {
	
	FILE *pont_arq;
	int r;
	char texto_str[51];
	
	pont_arq = fopen ("arquivo2.txt", "w");
	
	if (pont_arq == NULL) {
		
		printf ("Erro ao tentar abrir o arquivo.");
		exit (1);
	}
	
	r = fputs("Programando em C.", pont_arq);
	
	if (r == EOF) {
		
		printf ("Erro ao gravar os dados no arquivo.\n");
		exit (1);
		
	} else {
		
		printf ("Dados Gravados com sucesso!\n\n");
	}
	
	fclose (pont_arq);
	
	printf ("---- Leitura de Dados do Arquivo ----\n\n");
	
	pont_arq = fopen ("arquivo2.txt", "r");
	
	while (fgets(texto_str, 50, pont_arq)) {
		
		printf ("%s", texto_str);
	}
	
	fclose (pont_arq);
	
	return 0;
}
