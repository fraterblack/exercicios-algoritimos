#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float xnum1, xnum2, x;
    
    printf("Informe número 1: ");
	scanf("%f", &xnum1);
	
	printf("Informe número 2: ");
	scanf("%f", &xnum2);
	
	x = xnum1 + xnum2 + 2 * (xnum1 + xnum2);
	
	printf("O valor de x é: %f", x);
	
	getch();
}

/*
16. Elabore um algoritmo que leia dois números reais, xnum1, e xnum2 e imprima o valor de x, sabendo-se que:
x = xnum1 + xnum2 + 2(xnum1 – xnum2)
*/
