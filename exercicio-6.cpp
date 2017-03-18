#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");

	float numero1, numero2;
	
	printf("Informe o primeiro número: ");
	scanf("%f", &numero1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &numero2);
	
	printf("Número 1: %.2f \n", numero1);
	printf("Número 2: %.2f \n", numero2);
	
	getch();
}

/*
6. Elabore um algoritmo que leia dois números reais e imprima-os.
*/
