#include <stdio.h>

void scanearCodigo (char texto[]) {
	
	int i;
	
		for (i = 0; i < 50; i++) {
		
			scanf ("%2x", &texto[i]);
		}
		texto[i] = '\0';
}

void decifraCodigo (char texto[], int b) {
	
	int imprimir, i, aux = 0;
	
		for (i = 0; i < 50; i++) {
			
			imprimir = func_val(i+1, b);
			
			if (texto[i] == 00) {
			
				texto[i] == '\0';
				break;
			}
			
			texto[aux] = texto[i];
			
			if (aux < i) {
				
				texto[i] = 0;
			}
			
				if (imprimir) {
					
					aux++;
					continue;
					
				} else {
					
					texto[i] = 0;
				}
		}
}
