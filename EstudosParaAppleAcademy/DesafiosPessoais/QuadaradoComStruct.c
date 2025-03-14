#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	
	char **quadrado;
	
}Quadrado;

void imprimeQuadrado (Quadrado *ponteiroQuadrado);
void armazenaQuadrado (Quadrado *ponteiroQuadrado);

void alocaQuadrado (Quadrado *ponteiroQuadrado) {
	
	int i, j, k;
	
		for (i = 4, k = 0; k < 10; i++, k++) {
	
		ponteiroQuadrado[k].quadrado = (char **) malloc (sizeof(char *) * i);
		
			for (j = 0; j < i; j++) {
				
				ponteiroQuadrado[k].quadrado[j] = (char *) malloc (sizeof(char) * (i + (i-1)));
			}
		}
 
	armazenaQuadrado (ponteiroQuadrado);
}

void armazenaQuadrado (Quadrado *ponteiroQuadrado) {
	
	int i, j, k;
	
	for (k = 0; k < 10; k++) {
	
		for (i = 0; i < (4 + k); i++) {
			
			for (j = 0; j < (7 + (k + k)); j++) {
					
					 	
						if (j % 2 == 0 ){
						
							ponteiroQuadrado[k].quadrado[i][j] = '*';
							
						} else {
							
							ponteiroQuadrado[k].quadrado[i][j] = ' ';
						}
						
						if ((i % (3+k)) != 0 && (j % (6+k+k)) != 0) {
							
							ponteiroQuadrado[k].quadrado[i][j] = ' ';
						}
				}
			}
		}
		imprimeQuadrado (ponteiroQuadrado);
	}

void imprimeQuadrado (Quadrado *ponteiroQuadrado) {
	
	int i, j, k;
	
	for (k = 0; k < 10; k++) {
	
		for (i = 0; i < (4 + k); i++) {
			
			for (j = 0; j < (7 + k + k); j++) {
				
				printf ("%c", ponteiroQuadrado[k].quadrado[i][j]);
			}
			
			printf ("\n");
		}
		
		printf ("\n");
	}
}

int main () {
	
		Quadrado *ponteiroQuadrado = (Quadrado *) malloc (sizeof(Quadrado) * 10);
	
		alocaQuadrado(ponteiroQuadrado);
		
		return 0;
	}

//Criar um quadrado começa em 4x4 vai sempre imprimir os proximos 10 quadrado na frente dele sempre imprimindo um lado a mais ate chegar no decimo.
