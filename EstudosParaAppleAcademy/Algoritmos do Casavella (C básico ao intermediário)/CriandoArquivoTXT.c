#include <stdio.h>

int main () {
	
	FILE *ptr;
	
	ptr = fopen ("arquivo.txt", "a");
	
	fclose (ptr);
	
	printf ("O arquivo foi criado com sucesso!\n");
	
	return 0;
}
