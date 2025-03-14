#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alocaMapa (char **ponteiroMapa);
void imprimeMapa (char **ponteiroMapa);
int ganhou (char **ponteiroMapa);
int velha (char **ponteiroMapa);
void CPU(char **ponteiroMapa, char oposto);
void jogoCPU(char **ponteiroMapa);
void jogoPvP(char **ponteiroMapa); 

char joga (char **ponteiroMapa, int jogadaNumero, char jogadaCaractere) {
	
	int aux = 0;
	
	if (jogadaNumero < 4) {
		
		aux = 0;
		
	} else if (jogadaNumero < 7) {
		
		aux = 2;
		
	} else {
		
		aux = 4;
	}

		
	if (jogadaNumero == 1 || jogadaNumero == 4 || jogadaNumero == 7) {
		
		jogadaNumero = 1;
		
		ponteiroMapa[aux][jogadaNumero] = jogadaCaractere;
		
	} else if (jogadaNumero == 2 || jogadaNumero == 5 || jogadaNumero == 8) {
		
		jogadaNumero = 5;
		
		ponteiroMapa[aux][jogadaNumero] = jogadaCaractere;
		
	} else if (jogadaNumero == 3 || jogadaNumero == 6 || jogadaNumero == 9) {
		
		jogadaNumero = 9;
		
		ponteiroMapa[aux][jogadaNumero] = jogadaCaractere;
	}
	
	imprimeMapa(ponteiroMapa);
}

void alocaMapa (char **ponteiroMapa) {
	
	int i, j;
	
	for (i = 0; i < 5 ; i++) {
		
		for (j = 0; j < 11; j++) {
			
			if (i == 1 || i == 3) {
				
				ponteiroMapa[i][j] = '-';
				
			} else {
				
				if (j == 3 || j == 7) {
			
				ponteiroMapa[i][j] = '|';
		
				} else {
				
				ponteiroMapa[i][j] = ' ';
				}
			}
		}
	}
	
	printf ("\n");
}

void imprimeMapa (char **ponteiroMapa) {
	
	int i;
	
	for (i = 0; i < 5; i++) {

			printf ("%s\n", ponteiroMapa[i]);	
	}
}

int ganhou (char **ponteiroMapa) {
		
	int i, j, cheioX = 0, cheioBola = 0;
			
	for (i = 0; i <= 4; i += 2) {
		
		cheioX = 0;
		cheioBola = 0;
		
		for (j = 1; j <= 9; j += 4) {
			
			if (ponteiroMapa[i][j] == 'X') {
				
				cheioX++;
			
			} 
			
			if (ponteiroMapa[i][j] == 'O') {
			
				cheioBola++;
			}
		}
		
		if (cheioBola == 3) return 3;
		if (cheioX == 3) return 2;
	}
	
	
	for (i = 1; i <= 9; i += 4) {
		
		cheioX = 0;
		cheioBola = 0;
		
		for (j = 0; j <= 4; j += 2) {
			
			if (ponteiroMapa[j][i] == 'X') {
				
				cheioX++;
				
			}
			
			if (ponteiroMapa[j][i] == 'O') {
				
				cheioBola++;
			}
		}
		
		if (cheioBola == 3) return 3;
		if (cheioX == 3) return 2;
	}
	
	cheioX = 0;
	cheioBola = 0;
	
	for (i = 0, j = 1; i <= 4; i += 2, j += 4) {
		
			if (ponteiroMapa[i][j] == 'X') cheioX++;
			if (ponteiroMapa[i][j] == 'O')cheioBola++;
			
			if (cheioBola == 3) return 3;
			if (cheioX == 3) return 2;
	}
	
	cheioX = 0;
	cheioBola = 0;
	
	for (i = 0, j = 9; i <= 4; i += 2, j -= 4) {
		
		if (ponteiroMapa[i][j] == 'X') cheioX++;
		if (ponteiroMapa[i][j] == 'O') cheioBola++;
		
		if (cheioBola == 3) return 3;
		if (cheioX == 3) return 2;
	}
	
	 
	return 0;
}

void jogoPvP (char **ponteiroMapa) {
	
	char jogadaCaractere;
	char contaJogada[9];
	int jogadaNumero, contaPosicao[9];
	int i = 0, j, temp = 0, invalido = 0;
	
	while ((temp = ganhou(ponteiroMapa)) < 2) {

		do {
			
		scanf ("%d%c", &jogadaNumero, &jogadaCaractere);
		jogadaCaractere = toupper(jogadaCaractere);
		contaJogada[i] = jogadaCaractere;
		contaPosicao[i] = jogadaNumero;
		
		invalido = 0;
			
			if (i >= 1) {
					
				if (contaJogada[i] == contaJogada[i-1]) {
				
					printf ("\nVez do outro jogador\n");
					
					contaJogada[i] = ' ';
						
					i--;
					
					invalido = 1;	 
				}
			
				for (j = 0; j < i; j++) {
							
					if (contaPosicao[i] == contaPosicao[j]) {
						
						printf ("\nPosicao Invalida\n");
						contaPosicao[i] = 0;
						
						i--;
						
						invalido = 1;
					}	
				}
			} 
		
		if (jogadaNumero <= 0 || jogadaNumero >= 10) {
		
			printf ("\nJogada invalida tente novamente\n\n");
			invalido = 1;
		}
		
		i++;
		
		} while (((jogadaCaractere != 'X') && (jogadaCaractere != 'O')) || (invalido));
		
		joga(ponteiroMapa, jogadaNumero, jogadaCaractere);
		
		if (velha(ponteiroMapa) == 4) {
			
		printf ("\nDeu velha");
		
		break;
			
		}
		
		if (temp == 3) {
			
			printf ("O jogador 'O' ganhou!");
			
		} else if (temp == 2) {
			
			printf ("O jogador 'X' ganhou!");
			
		}	
	}
	
	if (temp == 3) {
		
		printf ("O jogador 'O' ganhou!");
		
	} else if (temp == 2) {
		
		printf ("O jogador 'X' ganhou!");
		
	}	
}

int velha (char **ponteiroMapa) {
	
	int i, j, contador = 0;
	
	for (i = 0; i <= 4; i += 2) {
	
		for (j = 1; j <= 9; j += 4) {
			
			if (ponteiroMapa[i][j] != ' ') contador++;
		}
	}
	
	if (contador == 9) return 4;
}

void CPU(char **ponteiroMapa, char oposto) {
	
	int i, aux = 0, jogadaNumero, cheio = 1;
	
	srand(time(0));
	
	while (cheio) {
		
	jogadaNumero = rand () % 10;
	
	if (jogadaNumero == 0) jogadaNumero++;
		
		if (jogadaNumero < 4) {
			
			aux = 0;
			
		} else if (jogadaNumero < 7) {
			
			aux = 2;
			
		} else {
			
			aux = 4;
		}
	
			
		if (jogadaNumero == 1 || jogadaNumero == 4 || jogadaNumero == 7) {
			
			jogadaNumero = 1;
				
		} else if (jogadaNumero == 2 || jogadaNumero == 5 || jogadaNumero == 8) {
			
			jogadaNumero = 5;
			
		} else if (jogadaNumero == 3 || jogadaNumero == 6 || jogadaNumero == 9) {
			
			jogadaNumero = 9;
		
		}
		
		if (ponteiroMapa[aux][jogadaNumero] == ' ') {
			
			if (oposto == 'X') {
			
			ponteiroMapa[aux][jogadaNumero] = 'O';
			
			} else {
				
				ponteiroMapa[aux][jogadaNumero] = 'X';
			}	
			
			cheio = 0;
		}
	}
}

void jogoCPU (char **ponteiroMapa) {
	
	char jogadaCaractere[2];
	int jogadaNumero = 0, invalido = 0, temp = 0, i = 0;
	
	do {
		
		scanf ("%d%c", &jogadaNumero, &jogadaCaractere[1]);
		
		while (jogadaCaractere[1] != 'X' || jogadaCaractere[1] != 'O' || jogadaNumero < 1 || jogadaNumero > 9) {
			
			printf ("Entrada Errada\nTente Novamente");
			scanf ("%d%c", &jogadaNumero, &jogadaCaractere);
		}
		
		if (i == 0) {
			
			jogadaCaractere[0] = jogadaCaractere[1];
			
		} else if (jogadaCaractere[1] == jogadaCaractere[0]) {
			
			joga(ponteiroMapa, jogadaNumero, jogadaCaractere[1]);
			
		} else {
			
			printf ("Entrada Errada\nTente Novamente");
			
		}
		
		if (velha(ponteiroMapa) == 4) {
			
		printf ("\nDeu velha");
		
		break;
			
		}
		
		i++;
		
	} while ((temp = ganhou(ponteiroMapa)) < 2);

	if (temp == 3) {
			
			printf ("O jogador 'O' ganhou!");
			
		} else if (temp == 2) {
			
			printf ("O jogador 'X' ganhou!");
			
		}	
	
	if (temp == 3) {
		
		printf ("O jogador 'O' ganhou!");
		
	} else if (temp == 2) {
		
		printf ("O jogador 'X' ganhou!");
		
	}	
}

int main () {
	
	char **ponteiroMapa = (char **) malloc (sizeof(char *) * 5);

	int i = 0, escolha = 0;
	
	for (i = 0; i < 11; i++) {
		
		ponteiroMapa[i] = (char *) malloc (sizeof(char) * 11);	
	}
	
	alocaMapa(ponteiroMapa);
	
	i = 0;
	
	while (escolha != 1 && escolha != 2) {
	
	printf ("1 - Jogar com Amigo\n2 - Jogar com Computador\n\n");
	scanf ("%d", &escolha);
	}
	
	if (escolha == 1) {	
	
	jogoPvP(ponteiroMapa);
	
	} else {
		
	jogoCPU(ponteiroMapa);
	}
		
	return 0;	
} 
