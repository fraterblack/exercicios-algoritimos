#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");

	int numero;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &numero);
	
	printf("N�mero: %d \n", numero);
	
	getch();
}

/*
5. Elabore um algoritmo que leia um n�mero inteiro e imprima-o.
*/
