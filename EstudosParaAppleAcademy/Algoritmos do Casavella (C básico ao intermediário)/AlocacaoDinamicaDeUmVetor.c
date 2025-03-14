#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *p;
	int i, qtd_elementos;
	
	printf ("Digite a quantidade de elementos: ");
	scanf ("%d", &qtd_elementos);
	
	p = (int *) (malloc(qtd_elementos * sizeof (int)));
	
	if (p == NULL) {
		
		printf ("\nErro de alocacao de memoria");
		return 1;
	}
	
	for (i = 0; i < qtd_elementos; i++) {
		
		printf ("Digite o numero para o indice [%d]: \n", i);
		scanf ("%d", &p[i]);
	}
	
	for (i = 0; i < qtd_elementos; i++) {
		
		printf ("Valor armazenado no elemento de indice [%d] = %d\n", i, p[i]);
	}
	
	free (p);
	return 0;
}
