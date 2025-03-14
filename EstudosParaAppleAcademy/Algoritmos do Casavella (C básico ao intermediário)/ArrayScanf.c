#include <stdio.h>

int main () {
	
	float notas [4];
	int i;
	
	//entrada dos dados
	for (i = 0; i <= 3; i++) {
	
	printf ("Digite um nota: \n");
	scanf ("%f", &notas[i]);
	}
	
	//saida dos dados
	for (i = 0; i <= 3; i++){
	
	printf ("Nota %d do aluno: %.2f\n", i, notas[i]);
	}
	
	return 0;
}
