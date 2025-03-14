#include <stdio.h>

int main (){
	
	int a, b, soma;
	
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &a);
	
	printf ("Digite outro numero inteiro: ");
	scanf ("%d", &b);
	
	soma = a + b;
	
	printf ("O valor da soma = %d \n", soma);
	
	if (soma > 10){
		
		printf ("O valor da soma eh maior que 10 \n");
	}
	return 0;
}
