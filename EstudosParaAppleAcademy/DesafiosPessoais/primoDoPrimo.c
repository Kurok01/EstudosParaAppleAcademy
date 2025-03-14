#include <stdio.h>

void Primo (int x, int y) {
	
	int i;
	int ehPrimo;
	
	for (x = x; x <= y; x++) {
	
		if (x == 2) {
			
			printf ("%d\n", x);
		}
		
		if (x % 2 == 0) {
			
			continue;
		}
		
		if (x == 0 || x == 1) {
			
			continue;
		}
		
		for (i = 3; i * i <= x; i += 2) {
			
			if (x % i == 0) {
				
				ehPrimo = 0;
				
				break;
				
			} else {
				
				printf ("%d\n", x);
			}
		}
		
		/*if (ehPrimo) {
			
			printf ("%d\n", x);
		}*/
	}
}

int main () {
	
	int n1, n2;
	
	printf ("Digite o limite inferior: ");
	scanf ("%d", &n1);
	
	printf ("Digite o limite superior: ");
	scanf ("%d", &n2);
	
	Primo(n1, n2);
	
	return 0;
}
