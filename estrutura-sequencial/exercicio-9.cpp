#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
main () {
    setlocale(LC_ALL, "Portuguese");
     
	char nome[30];
	char descricao[200];
	float frequencia;
	float mediaAprovacao;

	printf("Nome da Disciplina: ");
	gets(nome);
	fflush(stdin);
	//scanf("%s", &nome);
	
	printf("Descrição: ");
	gets(descricao);
	fflush(stdin);
	//scanf("%s", &descricao);
	
	printf("Frequência: ");
	scanf("%f", &frequencia);
	
	printf("Media Mínima para Aprovacao: ");
	scanf("%f", &mediaAprovacao);
	
	printf("Nome da Disciplina: %s \n", nome);
	printf("Descrição: %s \n", descricao);
	
	printf("Frequência: %.2f %%\n", frequencia);
	printf("Média Mínima para Aprovação: %.2f \n", mediaAprovacao);
	
	getch();
}

/*
9. Elabore um algoritmo que leia e imprima os dados de uma disciplina escolar: nome, descrição,
freqüência e média mínima para aprovação.
*/
