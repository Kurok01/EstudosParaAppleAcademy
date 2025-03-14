#include <stdio.h>
#include <string.h>

int main () {
	
	char str1[20] = "Curso";
	
	strcat(str1, " de programacao em C \n");
	
	printf ("String = %s", str1);
	
	// Para copiar so uma determinada Qtd de caracteres
	
	char vet[ ] = "Curso";
	char vet2[ ] = " de programacao em C";
	
	strncat (vet, vet2, 15);
	
	printf ("Nova String = %s", vet);
	
	return 0;
}
