#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int atualLivro = 0;

typedef struct {
	
	char titulo[100];
	char autor[100];
	int ano;
	
}Livro;

void adicionarLivro (Livro **biblioteca, int *tamanho);

void exibirLivro (Livro *biblioteca, int tamanho);

void removerLivro (Livro **biblioteca, int *tamanho, const char *titulo);

void ordenarLivro (Livro *biblioteca, int tamanho);

void liberarMemoria (Livro *biblioteca);

int main () {
	
	Livro *biblioteca = (Livro *) malloc (sizeof(Livro));
	
	int opcao = 0, tamanho = 1;
	char titulo[100];
	
	
	
	while (opcao !=5) {
		
	printf ("\nEscolha uma opcao:\n\n1 - Adicionar Livro\n2 - Exibir a lista de livros\n3 - Remover um livro\n4 - Ordenar os livros\n5 - Sair\n\n");
	scanf ("%d", &opcao);
	
	printf ("\n");
	
		switch (opcao) {
			
			case 1:
				
				adicionarLivro (&biblioteca, &tamanho);
				tamanho++;
				break;
				
			case 2:
					
				exibirLivro (biblioteca, tamanho);
				break;
				
			case 3:
				
				printf ("Qual livro deseja remover? ");
				scanf (" %99[^\n]", &titulo);
				removerLivro (&biblioteca, &tamanho, titulo);
				break;
				
			case 4:
				
				ordenarLivro (biblioteca, tamanho);
				printf ("Livros Ordenados\n");
				break;
				
			case 5:
				
				liberarMemoria(biblioteca);
				printf ("Saindo do Programa.\n");
				break;
				
			default:
				
				printf ("Opcao Invalida, tente novamente\n\n");
				break;
		}
	}
	
	return 0;
}

void adicionarLivro (Livro **biblioteca, int *tamanho) {
	
	if (atualLivro >= *tamanho) {
		
		*tamanho *= 2;
		
		*biblioteca = (Livro *) realloc (*biblioteca, *tamanho);
			
		if (biblioteca == NULL) {
		
		printf ("Erro de alocacao");
		}	
	}
	
	printf ("Qual o titulo do livro: ");
	scanf (" %99[^\n]", (*biblioteca)[atualLivro].titulo);
	
	printf ("Qual o autor: ");
	scanf (" %99[^\n]", (*biblioteca)[atualLivro].autor);
	
	printf ("Qual ano de publico: ");
	scanf ("%d", &(*biblioteca)[atualLivro].ano);
	
	atualLivro++;
}

void exibirLivro (Livro *biblioteca, int tamanho) {
	
	int i = 0;
	
	for (i = 0; i < atualLivro; i++) {
	
		printf ("Titulo: %s\n", biblioteca[i].titulo);
	
		printf ("Autor: %s\n", biblioteca[i].autor);
	
		printf ("Ano de Publicacao: %d\n\n", biblioteca[i].ano);
	} 
	
	i++;
}

void removerLivro (Livro **biblioteca, int *tamanho, const char *titulo) {
	
	int i, j, contador = 0, tam = 0, escolha = 0;
	Livro aux;
	
	tam = strlen(titulo);
	
		for (i = 0; i < atualLivro; i++) {
			
			contador = 0;
			
			for (j = 0; j < tam; j++) {
			
				if ((*biblioteca)[i].titulo[j] == titulo[j]) {
					
					contador++;
				}
			}
				
			if (contador >= tam/2) {
				
				do {
		
				printf ("Deseja remover '%s?'(0 - Nao   1 - Sim) ", (*biblioteca)[i].titulo);
				scanf ("%d", &escolha);
				
				} while ((escolha != 0) && (escolha != 1));
				
				if (escolha) break;
			}
		}
	
	
	if (escolha) {
		
		for (j = i; j < atualLivro; j++) {
		
			aux = (*biblioteca)[j+1];
			(*biblioteca)[j+1] = (*biblioteca)[j];
			(*biblioteca)[j] = aux;
		}
		
		atualLivro--;	 
	}
}

void ordenarLivro (Livro *biblioteca, int tamanho) {
	
	int i,j;
	Livro aux;
	char auxString[100];
	
	for (i = 0; i < atualLivro; i++) {
		
		for(j = 0; j < atualLivro; j++) {
		
			if (biblioteca[j].ano > biblioteca[j+1].ano) {
				
				aux = biblioteca[j+1];
				biblioteca[j+1] = biblioteca[j];
				biblioteca[j] = aux;
			}	
		}
	} 
}

void liberarMemoria (Livro *biblioteca) {
	
	free(biblioteca);
}
