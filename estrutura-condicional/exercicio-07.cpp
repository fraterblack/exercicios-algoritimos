#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero1, numero2, numero3, menor;
    
    printf("Informe primeiro n�mero: ");
	scanf("%d", &numero1);
	
	printf("Informe segundo n�mero: ");
	scanf("%d", &numero2);
	
	printf("Informe terceiro n�mero: ");
	scanf("%d", &numero3);
	
	menor = numero1;
	
	if (numero2 < menor) {
		menor = numero2;
	}
	
	if (numero3 < menor) {
		menor = numero3;
	}
		printf("O menor n�mero � %d \n", menor);
	
	getch();
}
/*
7. Elabore um algoritmo que leia tr�s n�meros e imprima o menor n�mero.
*/
