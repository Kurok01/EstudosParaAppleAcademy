#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char ch [15];
	int valor [15], i = 0;
	
	FILE *ptrArq;
	
	ptrArq = fopen ("binario.bin", "rb");
	
	if (ptrArq == NULL) {
		
		printf ("Erro ao tentar abrir o programa\n");
		exit(1);
		
	} else {
		
		printf ("Arquivo aberto com sucesso!\n\n");
	}
	
	fread (ch, sizeof(ch), 1, ptrArq);
	fread (valor, sizeof(valor), 1, ptrArq);
	
	printf ("\n\nVetor de caracteres: \n\n");
	
	for (i = 0; i < sizeof(ch); i++) {
		
		printf ("%c", ch[i]);
	}
	
	printf ("\n\n\n\nVetor de inteiros: \n");
	
	for (i = 0; i < 15; i++) {
		
		printf ("\n%d", valor[i]);
	}
	
	fclose (ptrArq);
	
	return 0;
}
