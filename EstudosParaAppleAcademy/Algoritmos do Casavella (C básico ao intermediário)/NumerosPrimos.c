#include <stdio.h>

int main () {
	
	int valor, i;
	
	printf ("Digite um valor: ");
	scanf ("%d", &valor);
	
	if (valor == 2) {
		
		printf ("Eh primo!");
		
		return 0;
	}
	
	if (valor % 2 == 0 || valor == 1 || valor == 0) {
		
		printf ("Nao e primo!");
		
		return 0;
		
	} else {
		
		for (i = 3; i * i <= valor; i += 2) {
			
			if (valor % i == 0){
				
				printf ("Nao e primo!");
				
				return 0;	
			}  
		}
		
		printf ("Eh primo!");
	}
	
	return 0;
}
