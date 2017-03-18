#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");

	int numero;
	
	printf("Informe um número inteiro: ");
	scanf("%d", &numero);
	
	printf("Número: %d \n", numero);
	
	getch();
}

/*
5. Elabore um algoritmo que leia um número inteiro e imprima-o.
*/
