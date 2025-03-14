#include <stdio.h>

int maior_valor (int valor1, int valor2) {
	
	if (valor1 > valor2) {
	
		return valor1;
		
	} else {
		
		return valor2;
	}
}

int main () {
	
	int valor1 = 0 , valor2 = 0;
	
	printf ("Digite um valor: ");
	scanf ("%d", &valor1);
	
	printf ("Digite outro valor: ");
	scanf ("%d", &valor2);
	
	printf ("%d", maior_valor (valor1, valor2));
	
	return 0;
}
