#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero1, numero2, numero3, numero4;
    
    printf("Informe primeiro número: ");
	scanf("%d", &numero1);
	
	while (!numero2 || numero2 <= numero1) {
		printf("Informe segundo número: ");
		scanf("%d", &numero2);
	}
	
	while (!numero3 || numero3 <= numero2) {
		printf("Informe terceiro número: ");
		scanf("%d", &numero3);
	}
	
	printf("Informe quarto número: ");
	scanf("%d", &numero4);
	
	if (numero4 >= numero3) {
		printf("Números: %d, %d, %d, %d", numero4, numero3, numero2, numero1);
	} else if (numero4 >= numero2) {
		printf("Números: %d, %d, %d, %d", numero3, numero4, numero2, numero1);
	} else if (numero4 >= numero1) {
		printf("Números: %d, %d, %d, %d", numero3, numero2, numero4, numero1);
	} else {
		printf("Números: %d, %d, %d, %d", numero3, numero2, numero1, numero4);
	}
	
	getch();
}
/*
9. Elabore um algoritmo que leia três números, obrigatoriamente em ordem crescente, 
e um quarto número que não siga esta regra.
Mostre, em seguida, os quatro números em ordem decrescente.
*/
