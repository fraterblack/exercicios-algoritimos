#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	int numero;

	printf("Informe n�mero inteiro: ");
	scanf("%i", &numero);
	
	printf("Sucessor de %i �: %i \n", numero, (numero + 1));
	printf("Antecessor de %i �: %i \n", numero, (numero - 1));
	
	getch();
}

/*
12.Elabore um algoritmo que leia um n�mero inteiro e imprima seus sucessor e seu antecessor.
*/
