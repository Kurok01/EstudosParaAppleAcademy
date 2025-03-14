#include <stdio.h>

int main () {
	
	int numero;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	
	numero >= 0 ? numero++ : numero--;
	
	printf ("O novo valor do um numero e: %d", numero);
	
	return 0;
}
