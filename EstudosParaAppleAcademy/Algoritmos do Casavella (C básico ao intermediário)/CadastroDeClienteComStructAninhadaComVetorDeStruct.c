#include <stdio.h>

struct tp_endereco {
	
	char rua[40];
	int numero;
	char bairro[40];
	char cidade[40];
	char estado[3];
	int cep;
};

struct tp_data_nascimento {
	
	int dia;
	int mes;
	int ano;
};

struct cadastro_cliente {
	
	char nome_cliente [60];
	int telefone;
	struct tp_endereco endereco;
	struct tp_data_nascimento data_nascimento;
	
} cad_cliente[2];


int main () {
	
	int i;
	
	printf ("-------------------------Cadastro do Cliente-------------------------");
	
	
	for (i = 0; i < 2; i++) {
		
		printf ("\n\nNome Cliente: ");
		fflush (stdin);
		gets (cad_cliente[i].nome_cliente);
		
		printf ("\nDigite o telefone do Cliente: ");
		scanf ("%d", &cad_cliente[i].telefone);
		
		printf ("\nDigite a rua: ");
		fflush (stdin);
		gets (cad_cliente[i].endereco.rua);
		
		printf ("\nDigite o numero da casa: ");
		scanf ("%d", &cad_cliente[i].endereco.numero);
		
		printf ("\nDigite o bairro: ");
		fflush (stdin);
		gets (cad_cliente[i].endereco.bairro);
		
		printf ("\nDigite a cidade: ");
		fflush (stdin);
		gets (cad_cliente[i].endereco.cidade);
		
		printf ("\nDigite o estado: ");
		fflush (stdin);
		gets (cad_cliente[i].endereco.estado);
		
		printf ("\nDigite o CEP: ");
		scanf ("%d", &cad_cliente[i].endereco.cep);
		
		printf ("\nDigite o ANO de nascimento: ");
		scanf ("%d", &cad_cliente[i].data_nascimento.ano);
		
		printf ("\nDigite o MES de nascimento: ");
		scanf ("%d", &cad_cliente[i].data_nascimento.mes);
		
		printf ("\nDigite o DIA de nascimento: ");
		scanf ("%d", &cad_cliente[i].data_nascimento.dia);
	}
	
	for (i = 0; i < 2; i++) {
		
		printf ("\n\n\n\n\n");
		printf ("\nNome: %s", cad_cliente[i].nome_cliente);
		printf ("\nRua: %s", cad_cliente[i].endereco.rua);
		printf ("\nCasa: %d", cad_cliente[i].endereco.numero);
		printf ("\nBairro: %s", cad_cliente[i].endereco.bairro);
		printf ("\nCidade: %s", cad_cliente[i].endereco.cidade);
		printf ("\nEstado: %s", cad_cliente[i].endereco.estado);
		printf ("CEP: %d", cad_cliente[i].endereco.cep);
		
		printf ("\nDia de Nascimento: %d", cad_cliente[i].data_nascimento.dia);
		printf ("\nMes de Nascimento: %d", cad_cliente[i].data_nascimento.mes);
		printf ("\nAno de Nascimento: %d", cad_cliente[i].data_nascimento.ano);
	}
	
	
	
	return 0;
}
