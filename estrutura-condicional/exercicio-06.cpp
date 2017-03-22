#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero1, numero2;
    
    printf("Informe primeiro número: ");
	scanf("%d", &numero1);
	
	printf("Informe segundo número: ");
	scanf("%d", &numero2);
	
	if (numero1 >= numero2) {
		printf("O menor número é %d \n", numero2);
		printf("O maior número é %d \n", numero1);
	} else {
		printf("O menor número é %d \n", numero1);
		printf("O maior número é %d \n", numero2);
	}
	
	getch();
}
/*
6. Elabore um algoritmo que leia dois números e imprima qual é maior e qual é menor.
*/
