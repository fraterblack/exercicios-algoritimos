#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	float numero;

	printf("Informe número real: ");
	scanf("%f", &numero);
	
	printf("A terça parte de %.2f é: %.2f \n", numero, (numero / 3));
	
	getch();
}

/*
13.Elabore um algoritmo que leia um número real e imprima a terça parte desse número.
*/
