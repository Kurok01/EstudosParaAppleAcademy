#include <stdio.h>
#include <stdlib.h>

void alocaMapa (char **ponteiroMapa);
void imprimeMapa (char **ponteiroMapa);
int ganhou (char **ponteiroMapa);

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

int main () {
	
	char **ponteiroMapa = (char **) malloc (sizeof(char *) * 5);
	char jogadaCaractere;
	int jogadaNumero;
	int i, temp = 0;
	
	for (i = 0; i < 11; i++) {
		
		ponteiroMapa[i] = (char *) malloc (sizeof(char) * 11);
	}
	
	alocaMapa(ponteiroMapa);
	
	while ((temp = ganhou(ponteiroMapa)) < 2) {

	scanf ("%d%c", &jogadaNumero, &jogadaCaractere);
	
	joga(ponteiroMapa, jogadaNumero, jogadaCaractere);
	}
	
	if (temp == 3) {
	
	printf ("O jogador 'O' ganhou!");
	
	} else if (temp == 2) {
	
	printf ("O jogador 'X' ganhou!");
	}
	
	return 0;	
} 
