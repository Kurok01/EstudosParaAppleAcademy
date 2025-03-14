#include <stdio.h>
#include <time.h>

#define MAX 50

void bubbleSort();

int main () {
	
	int numeros[MAX], i;
	
	srand (time(0)); 
	
	for (i = 0; i < 50; i++) {
		
		numeros[i] = rand () % 100;
	}
	
	bubbleSort(numeros);
	
	return 0;
}

void bubbleSort (int numeros[]) {
	
	int aux, i, j;
	
	for (i = 0; i < MAX-1; i++) {
		
		for (j = 0; j < MAX-1-i; j++) {
		
			if (numeros[j] > numeros[j+1]) {
			
			aux = numeros[j];
			numeros[j] = numeros[j+1];
			numeros[j+1] = aux;
			}
		}
	}
	
	for (i = 0; i < MAX; i++) {
		
		printf ("%d \n", numeros[i]);
	}
}
