#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ordenarCaracteres (char texto[], int tamanho, int b){

	int aux = 0, i;
	
	for (i = 0; i < tamanho; i++) {
		
		int imprimir = func_val(i + 1, b);
		
		texto[aux] = texto[i];
		
		if (aux < i) {
			
			texto[i] = 0;
		} 
		
		if (imprimir != 0) {
			
			aux++;
			continue;
			
		} else {
			
			texto[i] = 0;
			aux--;
		}
		
		aux++;
	}
}

void pegarCaracteres (char texto[]) {
	
	int i, tamanho = 0, variavelB;
	
	scanf("%d", &variavelB);
	
	while (variavelB > 100 || variavelB < -100) {
		
		printf ("VariavelB: %d\n", variavelB);
		printf ("Digite um valor entre -100 e 100\n");
		scanf ("%d", &variavelB);
		printf ("VariavelB: %d\n", variavelB);
	}
	
	for (i = 0; i < 50; i++) {
		
		scanf("%2x", &texto[i]);
		
		if (texto[i] == 00) {
			
			texto[i+1] = '\0';
			tamanho = strlen(texto);
		}
	}
	
	if (tamanho == 0) {
		
		texto[i+1] = '\0';
		tamanho = strlen(texto);
	}
	
	ordenarCaracteres(texto, tamanho, variavelB);
}
