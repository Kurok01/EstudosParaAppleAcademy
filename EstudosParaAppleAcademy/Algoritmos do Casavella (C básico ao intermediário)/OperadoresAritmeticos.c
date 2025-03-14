#include <stdio.h>

int main(){
	int valor_1, valor_2;
	int soma, multi, sub, div;
	
	printf("Digite o Primeiro Numero: \n");
	scanf("%d", &valor_1);
	
	printf("Digite o segundo Numero: \n");
	scanf("%d", &valor_2);
	
	soma = valor_1 + valor_2;
	multi = valor_1 * valor_2;
	sub = valor_1 - valor_2;
	div = valor_1 / valor_2;
	
	printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\nDivisao: %d", soma, sub, multi, div);
	
	return 0;
}
