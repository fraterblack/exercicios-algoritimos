#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero1, numero2, numero3, posicao1, posicao2, posicao3, controle;
    
    printf("Informe primeiro número: ");
	scanf("%d", &numero1);
	
	printf("Informe segundo número: ");
	scanf("%d", &numero2);
	
	printf("Informe terceiro número: ");
	scanf("%d", &numero3);
	
	posicao1 = numero1;
	posicao2 = numero2;
	posicao3 = numero3;
	
	if (posicao1 > posicao3) {
		controle = posicao1; //temp value
		
	    posicao1 = posicao3;
	    posicao3 = controle;
	}
	
	if (posicao2 > posicao3) {
		controle = posicao2; //temp value
		
	    posicao2 = posicao3;
	    posicao3 = controle;
	}
	
	if (posicao1 > posicao2) {
		controle = posicao1; //temp value
		
	    posicao1 = posicao2;
	    posicao2 = controle;
	}
	
	printf("Números informados: %d, %d, %d - Ordenados: %d, %d, %d", numero1, numero2, numero3, posicao1, posicao2, posicao3);
	
	getch();
}
/*
8. Elabore um algoritmo que leia três números e imprima-os em ordem crescente.
*/
