#include <stdio.h>

int main () {
	
	int n;
	
	for ( ; ; ) {
		
		printf ("Loop infinito com for \n");
		
		printf ("Digite 7 para sair do loop \n");
		scanf ("%d", &n);
		
		}
		
	}
	
	while (n==7){
		
		printf ("Loop infinito com while \n");
		
		printf ("Digite outro valor que nao seja o ultimo ");
		scanf ("%d", &n);
		
	}
	
	return 0;
}
