#include <stdio.h>

int main () {
	
	int x = 100;
	
	printf ("\n---------------------- Pos Incremento -------------------------\n \n");
	printf ("Valor de x na mesma linha do pos incremento: %d \n", x++);
	printf ("Valor de x na linha seguinte ao pos incremento: %d \n", x);
	
	printf ("\n---------------------- Pre Incremento -------------------------\n \n");
	printf ("Valor de x na mesma linha do pre incremento: %d \n", ++x);
	
	printf ("\n---------------------- Pos Decremento -------------------------\n \n");
	printf ("Valor de x na mesma linha do pos decremento %d: \n", x--);
	printf ("Valor de x na linha seguinte ao pos decremento: %d \n", x);
	
	printf ("\n---------------------- Pre Decremento -------------------------\n \n");
	printf ("Valor de x na mesma linha do pre decremento: %d \n", --x);
	
	return 0;
}
