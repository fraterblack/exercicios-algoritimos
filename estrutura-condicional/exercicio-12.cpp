#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Informe um n�mero: ");
	scanf("%d", &numero);
	
	if (numero % 3 == 0) {
		printf("� m�ltiplo de 3");
	} else {
		printf("N�o � m�ltiplo de 3");
	}
	
	getch();
}
/*
12. Elabore um algoritmo que leia um n�mero e imprima uma das mensagens: � m�ltiplo de 3, ou, n�o � m�ltiplo de 3.
*/
