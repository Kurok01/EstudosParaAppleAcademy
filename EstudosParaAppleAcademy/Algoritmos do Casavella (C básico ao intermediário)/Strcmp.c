#include <stdio.h>
#include <string.h>

int main () {
	
	char str1[] = "abc";
	char str2[] = "abd";
	int retorno;
	
	retorno = strcmp(str1, str2);
	/*
	0 = iguais
	<0 = str2 maior
	>0 = str1 maior
	*/
	printf ("%d \n\n", retorno);
	
	// Comparar ate um caracter especificos
	retorno = strncmp(str1, str2, 2);
	printf ("%d", retorno);
	
	return 0;
}
