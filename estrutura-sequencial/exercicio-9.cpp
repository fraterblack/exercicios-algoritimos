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
	
	printf("Descri��o: ");
	gets(descricao);
	fflush(stdin);
	//scanf("%s", &descricao);
	
	printf("Frequ�ncia: ");
	scanf("%f", &frequencia);
	
	printf("Media M�nima para Aprovacao: ");
	scanf("%f", &mediaAprovacao);
	
	printf("Nome da Disciplina: %s \n", nome);
	printf("Descri��o: %s \n", descricao);
	
	printf("Frequ�ncia: %.2f %%\n", frequencia);
	printf("M�dia M�nima para Aprova��o: %.2f \n", mediaAprovacao);
	
	getch();
}

/*
9. Elabore um algoritmo que leia e imprima os dados de uma disciplina escolar: nome, descri��o,
freq��ncia e m�dia m�nima para aprova��o.
*/
