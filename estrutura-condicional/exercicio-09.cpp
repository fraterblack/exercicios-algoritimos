#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero1, numero2, numero3, numero4;
    
    printf("Informe primeiro n�mero: ");
	scanf("%d", &numero1);
	
	while (!numero2 || numero2 <= numero1) {
		printf("Informe segundo n�mero: ");
		scanf("%d", &numero2);
	}
	
	while (!numero3 || numero3 <= numero2) {
		printf("Informe terceiro n�mero: ");
		scanf("%d", &numero3);
	}
	
	printf("Informe quarto n�mero: ");
	scanf("%d", &numero4);
	
	if (numero4 >= numero3) {
		printf("N�meros: %d, %d, %d, %d", numero4, numero3, numero2, numero1);
	} else if (numero4 >= numero2) {
		printf("N�meros: %d, %d, %d, %d", numero3, numero4, numero2, numero1);
	} else if (numero4 >= numero1) {
		printf("N�meros: %d, %d, %d, %d", numero3, numero2, numero4, numero1);
	} else {
		printf("N�meros: %d, %d, %d, %d", numero3, numero2, numero1, numero4);
	}
	
	getch();
}
/*
9. Elabore um algoritmo que leia tr�s n�meros, obrigatoriamente em ordem crescente, 
e um quarto n�mero que n�o siga esta regra.
Mostre, em seguida, os quatro n�meros em ordem decrescente.
*/
