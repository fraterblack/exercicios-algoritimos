#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Informe um número: ");
	scanf("%d", &numero);
	
	if (numero % 3 == 0) {
		printf("É múltiplo de 3");
	} else {
		printf("Não é múltiplo de 3");
	}
	
	getch();
}
/*
12. Elabore um algoritmo que leia um número e imprima uma das mensagens: é múltiplo de 3, ou, não é múltiplo de 3.
*/
