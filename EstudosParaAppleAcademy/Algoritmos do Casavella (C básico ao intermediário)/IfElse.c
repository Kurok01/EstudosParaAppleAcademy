#include <stdio.h>

int main (){
	float n1, n2, media;
	
	printf ("Digite a primeira nota: ");
	scanf ("%f", &n1);
	
	printf ("\nDigite a segunda nota: ");
	scanf ("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	printf ("Sua media e: %.2f", media);
	
	if (media >=7){
		
		printf ("\nO aluno esta aprovado");
	}else{
		printf ("\nO aluno esta reprovado");
	}
	return 0;
}
