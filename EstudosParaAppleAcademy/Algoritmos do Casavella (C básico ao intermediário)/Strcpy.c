#include <stdio.h>
#include <string.h>

int main () {
	
	char nome[15], nome2[15];
	
	strcpy(nome, "Fulano de Tal");
	
	printf ("Nome = %s \n", nome);
	
	
	// Copiar so uma Qtd especifica de caracteres
	strncpy(nome2, nome, 6);
	
	printf("Nome2 = %s", nome2);
	
	return 0;
}
