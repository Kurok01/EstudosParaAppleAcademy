#include <stdio.h>

int main () {
	
	float n1, n2, resultado;
	char operacao;
	
	printf ("Digite um valor: ");
	scanf ("%f", &n1);
	
	printf ("Digite outro valor: ");
	scanf ("%f", &n2);
	
	printf ("Agora escolha uma operacao: (+, -, /, *) ");
	scanf (" %c", &operacao);
	
	switch (operacao) {
		
		case '+':
		printf ("A soma desses valores e: %.2f\n", resultado = n1 + n2);
		
		break;
		
		case '-':
		printf ("A subtracao desses valores e: %.2f\n", resultado = n1 - n2);
		
		break;
		
		case '*':
		printf ("A multiplicacao desses valores e: %.2f\n", resultado = n1 * n2);
		
		break;
		
		case '/':
		if (n2 != 0) {
		printf ("A divisao desses valores e: %.2f\n", resultado = n1 / n2);
		} else {
			printf ("Erro: divisao por zero.\n");
		}
		break;
	}
	
	
	return (0);
}
