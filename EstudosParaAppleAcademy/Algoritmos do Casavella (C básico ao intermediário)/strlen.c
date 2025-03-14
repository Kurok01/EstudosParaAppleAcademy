#include <stdio.h>
#include <string.h>

int main () {
	
	char str [6] = "Curso";
	int tamanho;
	
	tamanho = strlen(str);
	
	printf ("O tamanho da string %s vale: %d", str, tamanho);
	
	return 0;
}
