#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero, numero2;
    
    printf("Informe o primeiro n�mero: ");
	scanf("%d", &numero);
	
	printf("Informe o segundo n�mero: ");
	scanf("%d", &numero2);
	
	if (numero % numero2 == 0) {
		printf("A divis�o de (1� numero) por (2� n�mero) � exata");
	} else {
		printf("A divis�o de (1� numero) por (2� n�mero) N�O � exata");
	}
	
	getch();
}
/*
13. Elabore um algoritmo que leia dois n�meros e responda se a divis�o do primeiro pelo segundo � exata (o resto da divis�o deve ser igual a 0). 
Se for, o algoritmo deve imprimir a mensagem �A divis�o de (1� numero) por (2� n�mero) � exata�.
*/
