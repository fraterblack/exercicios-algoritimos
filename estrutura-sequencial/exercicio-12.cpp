#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	int numero;

	printf("Informe número inteiro: ");
	scanf("%i", &numero);
	
	printf("Sucessor de %i é: %i \n", numero, (numero + 1));
	printf("Antecessor de %i é: %i \n", numero, (numero - 1));
	
	getch();
}

/*
12.Elabore um algoritmo que leia um número inteiro e imprima seus sucessor e seu antecessor.
*/
