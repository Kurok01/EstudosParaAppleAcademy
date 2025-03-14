#include <stdio.h>

int main () {
	
	int i, n1 = 0, n2 = 1, aux = 0;
	
	for (i = 0; i < 10; i++) {
		
		aux = n2 + n1;
		n1 = n2;
		n2 = aux;
		printf ("%d\n", aux);
	}
	
	return 0;
}
