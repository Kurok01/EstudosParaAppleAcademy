#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void juntarFrases (char texto[], char *textoFinal) {
	
	int tamanho = strlen(texto);
	char *buffer = realloc(textoFinal, tamanho + strlen(textoFinal) + 1);
	
	if (buffer == NULL) {
		
		printf ("Erro ao realocar memoria: ");
		
		free(textoFinal);
		
		exit(1);
	}
	
	strncat(buffer, texto, tamanho);
	
	tamanho = strlen(buffer);
	
	textoFinal = buffer;
	
	textoFinal[tamanho] = '\n';
	
	textoFinal[tamanho+1] = '\0';
}

void imprimirFrases (char *textoFinal) {
	
	textoFinal[strlen(textoFinal)] = '\0';
	
	int i;
	
	for (i = 0; i < strlen(textoFinal); i++) {
	printf ("%c", textoFinal[i]);
	}
}
