#include <stdio.h>

int potencia (int contador);

int inverteValores (int valor) {
	
	int quociente = valor, resto;
	int contador = 0, i;
	
	while (valor) {
	
		contador++;
		valor /= 10;
	}
	
	valor = 0;
	
	for (i = contador; i > 0; i--) {
		
		resto = quociente % 10;
		quociente /= 10;
		valor += (resto * (potencia(i-1)));
	}
	
	return valor;
}

int potencia (int contador) {
	
	if (contador == 0) {
		
		return 1;
	}
	
	return 10 * potencia(contador-1);
}

int main () {
	
	int valor;
	
	printf ("Digite o valor: ");
	scanf ("%d", &valor);
	
	printf ("Valor invertdido: %d", inverteValores(valor));
}
