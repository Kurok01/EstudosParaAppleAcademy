#include <stdio.h>
#include <time.h>

#define MAX 50

void selectionSort (int numeros[]);

int main () {
	
	int numeros[MAX], i;
	
	srand (time(0));
	
	for (i = 0; i < 50; i++) {
		
		numeros[i] = rand () % 100;
	}
	
	selectionSort(numeros);
	
	return 0;
} 

void selectionSort (int numeros[]) {
	
	int i, j, menor = 0, aux = 0;
	
	for (i = 0; i < MAX; i++) {
		
		menor = numeros[i];
		aux = i;
		
		for (j = i; j < MAX; j++) {
			
			if (menor > numeros[j]) {
				
				menor = numeros[j];
				aux = j;
			}
		}
		
		if (aux != i) {
		
		numeros[aux] = numeros[i];
		numeros[i] = menor;
		
		}
	}
	
	for (i = 0; i < MAX; i++) {
		
		printf ("%d \n", numeros[i]);
	}
}
