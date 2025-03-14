#include <stdio.h>
#include <string.h>

int main () {
	
	int i;
	int cont = 0;
	
	// Se for estipulado um vetor de tamanho 7, por exmeplo, terao 6 posicoes uteis + 1 para o terminador '\0'.
	// Tambem e possivel deixar o tamanho vazio, que o sistema identificar automaticamente o tamanho da string.
	// O vazio tambem e um caracter
	
	char nome_cliente[ ] = "Fulano";
	
	for (i = 0; nome_cliente[i] != '\0'; i++) {
		
		printf ("Valor do elemento %d da string: %c \n", i, nome_cliente[i]);
		cont++;
	}
	printf ("\nQuantidade caracteres da string: %d \n", cont); 
	
	// Quantidade usando a funcao da biblioteca de strings "strlen".
	printf ("\nQuantidade de caracteres da string usando strlen: %d \n", strlen(nome_cliente));
	
	printf ("--------------------------------");
	
	
	//Para parar em uma parte especifica da string
	
	/*nome_cliente[3] = '\0';
	
	for (i = 0; nome_cliente [i] != '\0'; i++) {
		
		printf ("\nValor do elemento %d da string: %c", i, nome_cliente[i]);
	} */
	
	printf ("\nValor da string: %s", nome_cliente);
	
	return 0;
}
