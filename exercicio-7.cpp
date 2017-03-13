#include<stdio.h>
#include<conio.h>

main () {
	char nome[30];
	int idade;
	
	printf("Informe o nome: ");
	scanf("%s", &nome);
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("Nome: %s \n", nome);
	printf("Idade: %d", idade);
	
	getch();
}

/*
7 - Elabore um algoritmo que leia o nome e a idade de uma pessoa, e imprima a seguinte saída:
Nome:___________
Idade: ___________
*/
