#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char ch [15] = "Teste geral";
	int valor [15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	
	FILE *ptrArq;
	
	ptrArq = fopen("binario.bin", "wb");
	
	if (ptrArq == NULL) {
		
		printf ("Erro ao tentar abrir o arquivo\n");
		exit (1);
		
	} else {
		
		printf ("Arquivo criado com sucesso!\n");
	}
	
	//Geralmente usasse & para falar da variavel, mas nesse caso sao vetores, e o endereço da posicao 0 ja vem automatico
	fwrite (ch, sizeof(char), 15, ptrArq);
	fwrite (valor, sizeof(int), 15, ptrArq);
	
	fclose (ptrArq);
	
	return 0;	
}
