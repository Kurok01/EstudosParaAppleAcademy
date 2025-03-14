#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j, n_linhas, n_colunas;
	
	
	int **matriz1, **matriz2, **matriz_soma;
	
	FILE *ptrArq;
	
	ptrArq = fopen ("arqMatrizes.txt", "r");
	
	if (ptrArq == NULL) {
		
		printf ("Erro ao tentar abrir arquivo.");
		exit (1);
	}
	
	fscanf (ptrArq, "%d %d", &n_linhas, &n_colunas);
	
	matriz1 = (int **)calloc(n_linhas, sizeof(int *));
	
	for (i = 0; i < n_linhas; i++) {
		
		matriz1[i] = (int *)calloc(n_colunas, sizeof(int));
	}
	
	matriz2 = (int **)calloc(n_linhas, sizeof(int *));
	
	for (i = 0; i < n_linhas; i++) {
		
		matriz2[i] = (int *)calloc(n_colunas, sizeof(int));
	}
	
	for (i = 0; i < n_linhas; i++) {
		for (j = 0; j < n_colunas; j++) {
			
			fscanf (ptrArq, "%d", &matriz1[i][j]);
		}
	}
	
	for (i = 0; i < n_linhas; i++) {
		for (j = 0; j < n_colunas; j++) {
			
			fscanf (ptrArq, "%d", &matriz2[i][j]);
		}
	}
	
	fclose (ptrArq);
	
	printf ("Matrizes lidas do arquivo:\n");
	
	for (i = 0; i < n_linhas; i++) {
		for (j = 0; j < n_colunas; j++) {
			
			printf ("%2d ", matriz1[i][j]);
		}
	
	
	printf ("           ");
	
	
		for (j = 0; j < n_colunas; j++) {
			
			printf ("%2d ", matriz2[i][j]);
		}
		
		printf ("\n");
	}
	
	matriz_soma = (int **)calloc(n_linhas, sizeof(int*));
	
	for (i = 0; i < n_linhas; i++) {
		
		matriz_soma[i] = (int *)calloc(n_colunas, sizeof(int));
	}
	
	for (i = 0; i < n_linhas; i++) {
		for (j = 0; j < n_colunas; j++) {
			
			matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	
	printf ("\nMatriz Soma:\n");
	
	for (i = 0; i < n_linhas; i++) {
		for (j = 0; j < n_colunas; j++) {
			
			printf ("%3d ", matriz_soma[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n");
	
	return 0;
}
