#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero1, numero2;
    
    printf("Informe primeiro n�mero: ");
	scanf("%d", &numero1);
	
	printf("Informe segundo n�mero: ");
	scanf("%d", &numero2);
	
	if (numero1 >= numero2) {
		printf("O maior n�mero � %d \n", numero1);
	} else {
		printf("O maior n�mero � %d \n", numero2);
	}
	
	getch();
}
/*
5. Elabore um algoritmo que leia dois n�meros e imprima o maior n�mero.
*/
