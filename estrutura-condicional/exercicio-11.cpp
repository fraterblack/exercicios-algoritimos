#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Informe um número: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) {
		printf("O número é par");
	} else {
		printf("O número é ímpar");
	}
	
	getch();
}
/*
11. Elabore um algoritmo que leia um número e imprima se ele é par ou ímpar.
Obs: Para o número ser par, o resto de sua divisão por dois deve ser zero.
*/
