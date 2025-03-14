#include <stdio.h>

int main(){
	int x = 10, y = 5, z = 7, k = 7;
	
	printf ("Valor de x = %d\n", x);
	printf ("Valor de y = %d\n", y);
	printf ("Valor de z = %d\n", z);
	printf ("Valor de k = %d\n", k);
	
	printf ("\nx > y: %d\n", x > y);
	printf ("\nx < y: %d", x < y);
	
	printf ("\nz == k: %d\n", z == k);
	printf ("\nz != k: %d", z != k);
	
	printf ("\nz >= x: %d\n", z >= x);
	printf ("\nz <= k: %d", z <= k);
	
	return 0;
}
