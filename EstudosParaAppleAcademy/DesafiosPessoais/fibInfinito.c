#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
	
	struct lista *prox;
	struct lista *anterior;
	int valor;
	
} Lista;

void addLista (Lista **final, Lista **inicio, int valor);

void somaLista (Lista *final[], Lista *inicio[]);

void imprimirLista (Lista *final);

void liberarLista (Lista **final, Lista **inicio);

int main () {
	
	Lista *final[3];
	Lista *inicio[3];
	int i;
	
	for (i = 0; i < 3; i++) {
		
		final[i] = NULL;
		inicio[i] = NULL;
	}
	
	addLista (&final[0], &inicio[0], 0);
	addLista (&final[1], &inicio[1], 1);
	
	
	for (i = 0; i < 10000; i++) {
		
		somaLista(final, inicio);
	}
	
	return 0;
}

void addLista (Lista **final, Lista **inicio, int valor) {
	
	Lista *node = (Lista *) malloc (sizeof(Lista));
	
	if (*inicio == NULL) {
		
		*inicio = node;
		
	} else {
		
		(*final)->prox = node;
	}
	
	node->anterior = *final;
	*final = node;
	node->prox = NULL;
	node->valor = valor;
}

void somaLista (Lista *final[], Lista *inicio[]) {
	
	int i, auxNum = 0, resultado = 0;
	Lista *aux[3];
	
	for (i = 0; i < 3; i++) 	
		aux[i] = inicio[i];
		
	while (1) {
		
		if (aux[0] == NULL) {
			
			resultado = 0 + aux[1]->valor + auxNum;
			
		} else if (aux[1] == NULL) {
			
			resultado = aux[0]->valor + 0 + auxNum;
			
		} else {
			
			resultado = aux[0]->valor + aux[1]->valor + auxNum;
		}
		
		auxNum = 0;
		
		if (aux[0] != NULL) aux[0] = aux[0]->prox;
		if (aux[1] != NULL) aux[1] = aux[1]->prox;
		
		if (resultado >= 10) {
			
			addLista (&final[2], &inicio[2], resultado % 10);
			
			if (aux[0] == NULL && aux[1] == NULL) {
				
				addLista(&final[2], &inicio[2], resultado / 10);
				
			} else {
				
				auxNum = resultado / 10;
			}
			
		} else {
		
			addLista(&final[2], &inicio[2], resultado);
		}
		
		if (aux[0] == NULL && aux[1] == NULL) {
			
			break;
		}
	}	
		imprimirLista(final[2]);
		liberarLista(&final[0], &inicio[0]);
		
		inicio[0] = inicio[1];
		inicio[1] = inicio[2];
		inicio[2] = NULL;
		
		final[2] = NULL;
}


void imprimirLista (Lista *final) {
	
	while (final != NULL) {
		
		printf ("%d", final->valor);
		final = final->anterior;
	}
	
	printf ("\n");
}

void liberarLista (Lista **final, Lista **inicio) {
	
	Lista *aux = 0;
	
	while (*inicio != NULL) {
		
		aux = *inicio;
		*inicio = (*inicio)->prox;
		free(aux);
	}
	
	*final = NULL;
}
