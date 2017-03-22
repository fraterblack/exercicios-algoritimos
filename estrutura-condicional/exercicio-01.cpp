#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float numero;
    
    printf("Informe um número: ");
	scanf("%f", &numero);
	
	if (numero > 20) {
		numero = numero / 2;
		
		printf("Número %.1f \n", numero);
	}
	
	getch();
}
/*
1. Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade desse número.
*/
