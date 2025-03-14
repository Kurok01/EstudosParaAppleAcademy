#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	char *nome;
	int ID;
	float notaFinal;
	
}Aluno;

void adicionarAluno (Aluno **alunos, int *numAlunos);

void mostrarAluno (Aluno *alunos, int numAlunos);

void liberarMemoria (Aluno **alunos, int numAlunos);

int main () {
	
	Aluno *ponteiroRegistro;
	int opcao = 0, qtdAlunos = 0, i = 0;
	
	while (!i) {
		
	printf ("Opcao 1 - Adicionar Aluno\nOpcao 2 - Mostrar aluno\nOpcao 3 - Sair\n\nOpcao: ");
	scanf ("%d", &opcao);
		
		switch (opcao) {
			
			case 1:
				
				printf ("Digite a quantidade: ");
				scanf ("%d", &qtdAlunos);
				
				if (ponteiroRegistro != NULL) {
					
    				liberarMemoria(&ponteiroRegistro, qtdAlunos);
				}
				
				ponteiroRegistro = (Aluno *) malloc (sizeof(Aluno) * qtdAlunos);
				
				adicionarAluno(&ponteiroRegistro, &qtdAlunos);
				break;
				
			case 2:
				
				mostrarAluno(ponteiroRegistro, qtdAlunos);
				break;
				
			case 3:
				i = 1;
				break;
				
			default:
				printf("Opcao Invalida, digite outra: \n");
				break;
			}
	}
	
	liberarMemoria (&ponteiroRegistro, qtdAlunos);
	
	return 0;
}
 
void adicionarAluno (Aluno **alunos, int *numAlunos) {
	
	int i;
	
	for (i = 0; i < *numAlunos; i++) {
	
	(*alunos)[i].nome = (char *) malloc (sizeof(char) * 50);
	
	printf ("\nNome do aluno: ");
	scanf (" %[^\n]", (*alunos)[i].nome);
	
	fflush(stdin);
	
	printf ("ID do aluno: ");
	scanf ("%d", &(*alunos)[i].ID);
	
	printf ("Nota final do aluno: ");
	scanf ("%f", &(*alunos)[i].notaFinal);
	}
}

void mostrarAluno (Aluno *alunos, int numAlunos) {
	
	int i;
	
	for (i = 0; i < numAlunos; i++) {
		
		printf ("\n");
		
		printf ("Alunos: %s\n", alunos[i].nome);
		printf ("ID: %d\n", alunos[i].ID);
		printf ("Nota Final: %.2f\n", alunos[i].notaFinal);
		
		printf ("\n\n");
	}
}

void liberarMemoria (Aluno **alunos, int numAlunos) {
	
	int i;
	
	for (i = 0; i < numAlunos; i++) {
	
	free ((*alunos)[i].nome);
	}
	
	free (*alunos);
}
