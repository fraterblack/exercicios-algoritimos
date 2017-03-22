#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero1, numero2, numero3, menor;
    
    printf("Informe primeiro número: ");
	scanf("%d", &numero1);
	
	printf("Informe segundo número: ");
	scanf("%d", &numero2);
	
	printf("Informe terceiro número: ");
	scanf("%d", &numero3);
	
	menor = numero1;
	
	if (numero2 < menor) {
		menor = numero2;
	}
	
	if (numero3 < menor) {
		menor = numero3;
	}
		printf("O menor número é %d \n", menor);
	
	getch();
}
/*
7. Elabore um algoritmo que leia três números e imprima o menor número.
*/
