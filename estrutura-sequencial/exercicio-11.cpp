#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	float numero1;
	float numero2;

	printf("Informe primeiro número: ");
	scanf("%f", &numero1);
	
	while(numero1 <= 0) {
		printf("Informe um número maior que zero: ");
		
		scanf("%f", &numero1);
	}
	
	printf("Informe segundo número: ");
	scanf("%f", &numero2);
	
	while(numero2 <= 0) {
		printf("Informe um número maior que zero: ");
		
		scanf("%f", &numero2);
	}
	
	printf("Primeiro Número: %.2f \n", numero1);
	printf("Segundo Número: %.2f \n", numero2);
	printf("Soma: %.2f \n", (numero1 + numero2));
	printf("Subtração: %.2f \n", (numero1 - numero2));
	printf("Multiplicação: %.2f \n", (numero1 * numero2));
	
	getch();
}

/*
11.Elabore um algoritmo que leia 2 números (maiores que 0), e imprima os números informados, a
soma, subtração do primeiro pelo segundo, multiplicação, considerando a seguinte saída:
Primeiro Número:____ Segundo Número:____
Soma: ____
Subtração: ____
Multiplicação: ____
*/
