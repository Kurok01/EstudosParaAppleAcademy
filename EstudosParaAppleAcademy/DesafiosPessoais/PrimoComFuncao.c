#include <stdio.h>

void ehPrimo (int valor1, int valor2) {
	
	int i, j;
	
	for (j = valor1; j <= valor2; j++) {
		
		int noPrimo = 0;
			
		if (j == 2) {
			
			printf ("%d \n", j);
			
			continue;
			
		} else if (j % 2 == 0 || j == 0 || j == 1) {
			
			continue;
			
		} 
			
			for (i = 3; i * i <= j; i += 2) {
				
				if (j % i == 0) {
				
					noPrimo = 1;
					break;
				}
				
			}
			
			if (noPrimo == 0) {
				
				printf ("%d \n", j);
				continue;
			}
		
	} 
	
} 

int main () {
	
	int valor1, valor2;

	printf ("Digite um valor: ");
	scanf ("%d", &valor1);
	
	printf ("Digite outro valor: ");
	scanf ("%d", &valor2);
	
	ehPrimo (valor1, valor2);
	
	return 0;	
}
