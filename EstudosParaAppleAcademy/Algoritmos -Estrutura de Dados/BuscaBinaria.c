#include <stdio.h>

int buscaBinaria (int vet[], int key, int left, int right) {
	
	int mid = (left + right) / 2;
	
	if (right < left) {
		
		return -1;
	}
	
	if (vet[mid] == key) {
		
	 	return mid;
	
	} else if (key < vet[mid]) {
	
		return buscaBinaria (vet, key, left, mid-1);
			
	} else {
		
		return buscaBinaria (vet, key, mid+1, right);
	}
}	

int main () {
	
	int i, chave = 0, n = 0, busca = 0, posicao = 0;
	int vetor[n];
	do {
		
		printf ("Digite a chave: ");
		scanf ("%d", &chave);
		
		printf ("Digite o tamanho do vetor: ");
		scanf ("%d", &n);
		
	} while ((chave < 0 || chave > 10) && n > 0);
	
	for (i = 0; i < n; i++) {
		
		vetor[i] = i;
	}
	
	posicao = buscaBinaria(vetor, chave, 0, n-1);
	
	if (posicao >= 0) {
	
	printf ("Encontrou o valor na posicao %d", posicao);
	
	} else {
		
		printf ("Nao encontrou o valor");
	}
	
	return 0;
}
