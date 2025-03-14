#include <stdio.h>

int main () {
	
	int m [2][2] = {10, 20, 30, 40};
	//Tambem e possivel fazer da seguinte forma: {{10,20}, {30,40}};
	
	
	printf ("Valor da linha 0, coluna 0 = %d \n", m[0][0]);
	printf ("Valor da linha 0, coluna 1 = %d \n", m[0][1]);
	printf ("Valor da linha 1, coluna 0 = %d \n", m[1][0]);
	printf ("Valor da linha 1, coluna 1 = %d \n", m[1][1]);
	
	return 0;
}
