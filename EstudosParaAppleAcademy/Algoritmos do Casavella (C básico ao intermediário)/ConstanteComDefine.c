#include <stdio.h>
#define ICMS 0.18;

int main () {
	
	float preco_produto, valor_icms;
	
	printf ("Informe o valor do produto: ");
	scanf ("%f", &preco_produto);
	
	valor_icms = preco_produto * ICMS;
	
	printf ("Valor do imposto a ser pago: R$ %.2f", valor_icms);
	
	return 0;
}
