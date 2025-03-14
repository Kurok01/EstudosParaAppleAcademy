//Nao e um exercicio do Casavella, e um desafio pessoal.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int acertou (char *forca, int tentativa, char *chute) {
	
	int acertou = 0;
	int i, j;
	
	for (i = 0; i < strlen(forca); i++) {
		for (j = 0; j <= tentativa; j++) {
			
			if (chute[j] == forca[i]) {
				
				acertou++;
				break;
			} 	
		}
	}
	if (acertou == strlen(forca)) {
		
		return 1;
		
	} else {
		
		return 0;
	}
}

int main () {
	
	char forca [6] = {"FORCA"};
	char chutes [26];
	char chute;
	int i, j, tentativa;
	
	do {
		for (i = 0; i < strlen(forca); i++) {
			
			int achou = 0;
			
			for (j = 0; j <= tentativa; j++) {
				
				if (chutes[j] == forca[i]) {
					
					achou = 1;
					break;
				}
			}
			
			if (achou == 1) {
				
				printf ("%c ", forca[i]);
				
			} else {
				
				printf ("_ ");
			}
		}
		
		scanf (" %c", &chute);
		chutes[tentativa] = chute;
		
		tentativa++;
		
	} while (!acertou(forca, tentativa, chutes));
	
	printf ("Parabens chefe! Voce acertou.");
		
	return 0;
}
