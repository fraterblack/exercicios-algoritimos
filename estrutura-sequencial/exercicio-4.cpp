#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");

	char nome[30];
	
	printf("Informe o nome: ");
	//scanf("%s", &nome);
	gets(nome);
	fflush(stdin);
	
	printf("Nome: %s \n", nome);
	
	getch();
}

/*
4. Elabore um algoritmo de leia um nome, e imprima-o.
*/
