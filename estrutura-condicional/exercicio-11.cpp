#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Informe um n�mero: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) {
		printf("O n�mero � par");
	} else {
		printf("O n�mero � �mpar");
	}
	
	getch();
}
/*
11. Elabore um algoritmo que leia um n�mero e imprima se ele � par ou �mpar.
Obs: Para o n�mero ser par, o resto de sua divis�o por dois deve ser zero.
*/
