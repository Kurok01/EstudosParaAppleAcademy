#include <stdio.h>

int main (){
	
	int n1, n2;
	
	printf ("Digite o primeiro numero: ");
	scanf ("%d", &n1);
	
	printf ("Digite o segundo numero: ");
	scanf ("%d", &n2);
	
	if (n1 == n2){
		
		printf ("Os numeros sao iguais");
	} else if (n1 > n2){
		printf ("O maior valor e: %d", n1);
	} else {
		printf ("O maior valor e: %d", n2);
	}
	return 0;
}
