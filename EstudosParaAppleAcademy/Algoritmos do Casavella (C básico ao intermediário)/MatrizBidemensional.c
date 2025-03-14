#include <stdio.h>

int main () {
	
	int m[3][3], i, j;
	
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++) {
			
			printf ("\nElemento [%d][%d] = ", i, j);
			scanf ("%d", &m[i][j]);
		}
	}
	
	printf ("\nMatriz: \n\n%d  %d  %d\n%d  %d  %d\n%d  %d  %d", m[0][0], m[0][1], m[1][0], m[1][1], m[2][0], m[2][1], m[2][2]);
	return 0;
}
