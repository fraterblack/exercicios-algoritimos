#include<stdio.h>
#include<conio.h>

main () {
	char nome[30];
	char endereco[100];
	char cidade[30];
	char uf[2];
	int cep[8];
	int telefone[12];
	int cpf[11];
	char rg[20];
	int nascimento[10];
	char escolaridade[30];
	char curso[50];
	
	printf("CADASTRO DO PROFESSOR \n\n");
	
	printf("Informe o nome: ");
	//scanf("%s", &nome);
	gets(nome);
	fflush(stdin);
	
	printf("Informe o endereco: ");
	//scanf("%s", &endereco);
	gets(endereco);
	fflush(stdin);
	
	printf("Informe a cidade: ");
	//scanf("%s", &cidade);
	gets(cidade);
	fflush(stdin);
	
	printf("Informe o UF: ");
	//scanf("%s", &uf);
	gets(uf);
	fflush(stdin);
	
	printf("Informe o CEP (Somente números): ");
	scanf("%d", &cep);
	
	printf("Informe o telefone (Somente números): ");
	scanf("%d", &telefone);
	
	printf("Informe o cpf (Somente números): ");
	scanf("%d", &cpf);
	
	printf("Informe o RG: ");
	//scanf("%s", &rg);
	gets(rg);
	fflush(stdin);
	
	printf("Informe a data de nascimento (Somente números): ");
	scanf("%d", &nascimento);
	
	printf("Informe o grau de escolaridade: ");
	//scanf("%s", &escolaridade);
	gets(escolaridade);
	fflush(stdin);
	
	printf("Informe o curso que leciona: ");
	//scanf("%s", &curso);
	gets(curso);
	fflush(stdin);
	
	printf("\n\n Informacoes do cadastro do professor\n****************************************\n\n");
	
	printf("Nome: %s \n", nome);
	printf("Endereço: %s - %s - %s / %s \n", endereco, cep, cidade, uf);
	printf("Telefone: %s \n", telefone);
	printf("CPF: %d - RG: %s \n", cpf, rg);
	printf("Data de Nascimento: %d \n", nascimento);
	printf("Grau de Escolaridade: %s \n", escolaridade);
	printf("Curso que Leciona: %s \n", curso);
	
	getch();
}

/*
8. Elabore um algoritmo que leia e imprima os seguintes dados de um professor: 
nome, 
endereço, 
cidade, 
UF, 
CEP, 
telefone, 
CPF, 
RG, 
data de nascimento, 
grau de escolaridade 
e curso que leciona.
*/
