#include <stdio.h>
#include <string.h>

void imprimirForca (char palavra[], int tentativa, char chutes[]) {
	
	int i, j, achou;
	
	for (i = 0; i < strlen(palavra); i++) {
		
		achou = 0;
		
			for (j = 0; j <= tentativa; j++) {
			
			if (chutes[j] == palavra[i]) {
				
				achou = 1;
				break;
			}
		}
		
			if (achou == 0) {
			
			printf ("__ ");
			
			} else {
				
			printf ("%c ", palavra[i]);
			}
	}
	
	printf ("\n");
}


int ganhou (char palavra[], int tentativa, char chutes[]) {
	
	int i, j, achou = 0;
	
	for (i = 0; i < strlen(palavra); i++) {
		
			for (j = 0; j <= tentativa; j++) {
			
			if (chutes[j] == palavra[i]) {
				
				achou++;
				break;
			}
			}
		}
	
	
	if (strlen(palavra) == achou) {
		
		printf ("\nVOCE ACHOU A PALAVRA!");
		
		return 1;
		
	} else {
		
		return 0;
	}
}

int main () {
	
	char palavra[] = "ITAMI";
	char chute;
	char chutes[26];
	int tentativa = 0;
	int i;
	
	while (!ganhou(palavra, tentativa, chutes)) {
		
		printf ("Digite uma letra: ");
		scanf (" %c", &chute);
		
		chutes[tentativa] = chute;
		tentativa++;
	
		imprimirForca(palavra, tentativa, chutes);
	}
	
	return 0;
}
