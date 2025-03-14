#include <stdio.h>

//Prototipos da funcao: Serve para deixar o pre main mais organizado. O cabecalho e declarado e o corpo so vem depois do main
void retorna_cabec ();
int multiplica (int n1, int n2);

int main () {
	
	int v1, v2, resultado;
	
 	retorna_cabec();
	
	printf ("Digite um valor: ");
	scanf ("%d", &v1);
	
	printf ("Digite outro valor: ");
	scanf ("%d", &v2);
	
	resultado = multiplica(v1, v2);
	
	printf ("O resultado da multiplicacao desses valores eh: %d", resultado);
	
	return 0;
}

void retorna_cabec () {
	
	printf ("************************\n");
	printf ("      Linguagem C\n");
	printf ("************************\n");
	
	return;
}

int multiplica (int n1, int n2) {
	
	int res;
	
	res = n1 * n2;
	
	return res;
}
