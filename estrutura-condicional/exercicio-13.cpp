#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero, numero2;
    
    printf("Informe o primeiro número: ");
	scanf("%d", &numero);
	
	printf("Informe o segundo número: ");
	scanf("%d", &numero2);
	
	if (numero % numero2 == 0) {
		printf("A divisão de (1º numero) por (2º número) é exata");
	} else {
		printf("A divisão de (1º numero) por (2º número) NÃO é exata");
	}
	
	getch();
}
/*
13. Elabore um algoritmo que leia dois números e responda se a divisão do primeiro pelo segundo é exata (o resto da divisão deve ser igual a 0). 
Se for, o algoritmo deve imprimir a mensagem “A divisão de (1º numero) por (2º número) é exata”.
*/
