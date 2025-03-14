#include <stdio.h>

int main(){
	
	char nome [20];
	
	printf ("Digite seu nome: ");
	//scanf ("%s", nome);
	fgets (nome, 20, stdin);
	
	printf("Seu nome e: %s", nome);
	
	return 0;
}
