#include <stdio.h>

int main (){
	
	int i;
	
	//Inicializando o vetor com lista de valores. 
	//Pode se atribuir o tamando do vetor ou nao.
	
	/* int vetor [6] = {19, 19, 19, 19, 19, 19};
	int vetor [] = {19, 19, 19, 19, 19, 19}; */
	
	//Com o 0 apenas 1 zero e necessario ou apenas deixar a lista vazia.
	
	//int vetor[6] = {0};
	
	int vetor [6] = { };
	
	for (i = 0; i <= 5; i++) {
		
		printf ("vetor [%d] = %d\n", i, vetor[i]);
	}
}

