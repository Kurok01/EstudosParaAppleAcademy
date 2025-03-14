#include <stdio.h>

int verifica (int valor) {
	
	if (valor >= 0) {
		
		return 1;
		
	} else {
		
		return 0;
	}
	
}


int main () {
	
	int valor;
	
	printf ("Digite um inteiro diferente de 0: ");
	scanf ("%d", &valor);
	
	printf ("%d", verifica (valor));
	
	return 0;
}
