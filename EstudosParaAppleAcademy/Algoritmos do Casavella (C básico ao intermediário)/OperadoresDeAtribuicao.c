#include <stdio.h>

int main () {
	
	int num;
	
	num = 10;
	printf ("Valor inicial de num = %d \n \n", num);
	
	num += 5;
	printf ("Somando 5 ao valor atual tem se: %d \n \n", num);
	
	num -= 1;
	printf ("Subtraindo 1 do valor atual tem se: %d \n \n", num);
	
	num *= 2;
	printf ("Multiplicando 2 do atual tem se: %d \n \n", num);
	
	num /= 7;
	printf ("Dividindo o valor atual por 7 tem se: %d \n \n", num);
	
	return 0;
}
