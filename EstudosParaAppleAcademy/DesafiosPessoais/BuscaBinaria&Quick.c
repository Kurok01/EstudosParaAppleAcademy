#include <stdio.h>
#include <time.h>

#define TAM 50

void insertionSort(int numeros[]);

void buscaBinaria (int numeros[], int valor, int left, int right);

int main () {
	
	int numeros[TAM];
	int i, valor;
	
	srand (time(0));
	
	for (i = 0; i < 50; i++) {
		
		numeros[i] = rand () % 100;
	}
	
	insertionSort(numeros);
	
	printf ("Qual nome que procuras o son of a bitch? ");
	scanf ("%d", &valor);
	
	buscaBinaria (numeros, valor, 0, TAM-1);
	
	return 0;
}

void insertionSort (int numeros[]) {
	
	int i, j, aux = 0;
	

	
	for (i = 0; i < TAM; i++) {
		
		aux = numeros[i];
		
		for (j = i-1; j >= 0 && numeros[j] > aux; j--) {
			
			numeros[j+1] = numeros[j];
		}
		
		if (aux != numeros[j+1]) {
			
			numeros[j+1] = aux;
		}
		
	}
	
	for (i = 0; i < 50; i++) {
		
		printf ("%d \n", numeros[i]);
	}
}

void buscaBinaria (int numeros[], int valor, int left, int right) {
	
	if (left <= right) {
		
		int pivot = (left + right) / 2;
		
		if (numeros[pivot] == valor) {
			
			printf ("Valor: %d, Indice: %d", numeros[pivot], pivot);
			
			return;
		}
		
		if (numeros[pivot] > valor) {
			
			buscaBinaria(numeros, valor, left, pivot - 1);
			
		} else {
			
			buscaBinaria(numeros, valor, pivot + 1, right);
		}
	}	
}
