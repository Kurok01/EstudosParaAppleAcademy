#include <stdio.h>

int main (){
	
	float nota_final, frequencia;
	
	printf ("Digite a nota final do aluno: ");
	scanf ("%f", &nota_final);
	
	printf ("Informe a frequencia do aluno em porcentagem: ");
	scanf ("%f", &frequencia);
	
	if (nota_final >= 7.0 && frequencia >= 75){
		
		printf ("Aluno Aprovado");
	} else {
		printf ("Aluno Reprovado");
	}
	return 0;
}
