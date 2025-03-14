#include <stdio.h>

void soma10(int *x) {
	
	*x += 10;
	return;
}

int main () {
	
	int numero;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	
	printf ("O numero digitado foi: %d \n", numero);
	
	soma10(&numero);
	
	printf ("Agora o valor vale: %d \n", numero);
	
	return 0;
}
