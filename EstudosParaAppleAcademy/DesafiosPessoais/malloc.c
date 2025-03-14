#include <stdio.h>
#include <stdlib.h>

void recebePonteiro (int *p);

void realocaPonteiro(int *p) {
	
	p = (int *) realloc (p, sizeof(int) * 10);
	
	recebePonteiro (p);
	
}

void recebePonteiro (int *p) {
	
	int i; 
	static int contador = 0;
	
	if (contador == 5) p += 5;
	
	for (i = 0; i < 5; i++) {
		
		p[i] = (i + 1) * 2;
		contador++;
	}
	
	if (contador < 10)
	realocaPonteiro(p);
}

int main () {
	
	int i;
	int *p = (int *) malloc (sizeof(int) * 5);
	
	recebePonteiro(p);
	
	for (i = 0; i < 10; i++) {
		
		printf ("Posicao %d = %d\n", i+1, p[i]);
	}
	
	free(p);
	
	return 0;
}
