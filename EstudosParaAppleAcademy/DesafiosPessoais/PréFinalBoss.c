#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void multiplicaPor3 (int *vetor) {
	
	*vetor *= 3;
	vetor++;
	*vetor *= 3;
	vetor++;
	*vetor *= 3;
	
	vetor -= 2;
}

void multiplicaPor2 (int **matriz, int **vetor) {
	
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
	
		matriz[i][j] *= 2;
		}
	}
		vetor[0][0] = matriz[0][0];
		vetor[0][1] = matriz[1][1]; 
		vetor[0][2] = matriz[2][2];
		
		
		multiplicaPor3 (*vetor);
} 

int main () {
	
	int **pptrMatriz, **pptrVetor;
	int i, j;
	
	srand(time(0));
	
	pptrMatriz = (int **) malloc (sizeof(int *) * 3);
	pptrVetor = (int **) malloc (sizeof(int *) * 1);
	pptrVetor[0] = (int *) malloc (sizeof(int) * 3);
	
	for (i = 0; i < 3; i++) {
		
		pptrMatriz[i] = (int *) malloc (sizeof(int) * 3);
		
		for (j = 0; j < 3; j++) {
		
		pptrMatriz[i][j] = rand () % 11;
		}
	}
	
	multiplicaPor2(pptrMatriz, pptrVetor);
	
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++) {
			
		printf ("%d ", pptrMatriz[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n");
	
	printf ("%d %d %d", pptrVetor[0][0], pptrVetor[0][1], pptrVetor[0][2]);
	
	free (pptrMatriz);
	free (pptrVetor);
	
	return 0;
}

//Fazer matriz 3x3 e um vetor[3], ambos usando ponteiro de ponteiro, criar uma funcao que como parametro vai receber dois ponteiros de ponteiro
//Vai multiplicar os elementos dessa matriz por 2, depois vai armazenar a diagonal dessa matriz 3x3 no vetor[3].
//Vai criar outra função que vai receber de parametro um ponteiro, e dentro dessa funçao vai multiplicar os valores do vetor por 3.
//Essa funçao so pode ser chamada dentro da primeira funçao. E na segunda funçao so pode usar incremento.
//Por fim vai imprimir a matriz e o vetor modificado.


//gg easy
