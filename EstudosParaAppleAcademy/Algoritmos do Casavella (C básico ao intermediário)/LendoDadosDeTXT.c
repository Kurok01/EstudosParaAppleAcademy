#include <stdio.h>

int main () {
	
	FILE *pont_arq;
	char texto_str[20];
	
	pont_arq = fopen ("arquivo_palavra.txt", "r");
	
	while (fgets (texto_str, 20, pont_arq) != NULL) {
		
		printf ("%s", texto_str);
		
		fclose (pont_arq);
		
		return 0;
	}
}
