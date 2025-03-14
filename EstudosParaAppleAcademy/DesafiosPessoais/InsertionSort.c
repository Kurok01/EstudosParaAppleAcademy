#include <stdio.h>
#include <time.h>

#define MAX 50

void insertionSort (int numeros[]);

int main () {
	
	int numeros[MAX], i;
	
	srand(time(0));
	
	for (i = 0; i < MAX; i++) {
		
		numeros[i] = rand () % 100;
	}
	
	insertionSort(numeros);
	
	return 0;
}

void insertionSort (int numeros[]) {
	
	int i, j, aux = 0;
	
	for (i = 0; i < MAX; i++) {
		
		aux = numeros[i];
		
		
		for (j = i - 1; j >= 0 && numeros[j] > aux; j--) {
			
			numeros[j+1] = numeros[j];
		}
		
		numeros[j+1] = aux;
	}
	
	for (i = 0; i < MAX; i++) {
		
		printf ("%d \n", numeros[i]);
	}
}
