#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcval.h"
#include "pegarcaracteres.h"
#include "ordenarfrases.h"

int main () {
	
	char texto[51];
	
	int qtdMensagem = 0;
	
	int i = 0;
	
	char textoLixo;
	
	char *textoFinal = (char*) malloc (sizeof(char) * 1);
	if (textoFinal == NULL) {
		
		printf ("Erro ao alocar memoria.");
		exit(1);
	}
	
	textoFinal[0] = 0;
	
	scanf ("%d", &qtdMensagem);
	
	while ((qtdMensagem < 1) || (qtdMensagem > 10000)) {
	
		printf ("ERRO! Tente Novamente\n\n");
		printf ("Voce digitou um valor invalido para b. Pressione enter e tente novamente.\n");
		system("pause");
		scanf ("%d", &qtdMensagem);
	}
	
		while (i < qtdMensagem) {
			
			pegarCaracteres(texto);
			juntarFrases(texto, textoFinal);
			
			i++;
		}
	
	imprimirFrases(textoFinal);
	
	free(textoFinal);
	
	return 0;
}
