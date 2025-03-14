#include <stdio.h>
#include <stdlib.h>

void inverterOrdem (int **pptr) {
	
	int aux = 0;
		
		aux = *pptr[2];
		*pptr[2] = *pptr[1];
		*pptr[1] = *pptr[0];
		*pptr[0] = aux;
}

int main () {
	
	int **pptr = (int **) malloc (sizeof(int) * 3);
	int numeros[3] = {1, 2, 3};
	int *ptr = (int *) malloc (sizeof(int) * 3);
	int i;
	
	for (i = 0; i < 3; i++) {
		
		ptr[i] = numeros[i];
		pptr[i] = &ptr[i];
	}
	
	inverterOrdem(pptr);
	
	printf ("%d %d %d ", pptr[0][0], pptr[1][0], pptr[2][0]);
	
	return 0;
}
