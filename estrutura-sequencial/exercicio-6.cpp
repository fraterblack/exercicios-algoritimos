#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");

	float numero1, numero2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &numero1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%f", &numero2);
	
	printf("N�mero 1: %.2f \n", numero1);
	printf("N�mero 2: %.2f \n", numero2);
	
	getch();
}

/*
6. Elabore um algoritmo que leia dois n�meros reais e imprima-os.
*/
