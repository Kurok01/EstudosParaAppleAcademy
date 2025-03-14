#include <stdio.h>

enum dias_da_semana {Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado} dias;

int main () {
	
	printf ("Exibindo o conteudo da enum: ");
	printf ("%d %d %d %d %d %d %d\n", Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado);
	
	return 0;
}
