#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float xnum1, xnum2, x;
    
    printf("Informe n�mero 1: ");
	scanf("%f", &xnum1);
	
	printf("Informe n�mero 2: ");
	scanf("%f", &xnum2);
	
	x = xnum1 + xnum2 + 2 * (xnum1 + xnum2);
	
	printf("O valor de x �: %f", x);
	
	getch();
}

/*
16. Elabore um algoritmo que leia dois n�meros reais, xnum1, e xnum2 e imprima o valor de x, sabendo-se que:
x = xnum1 + xnum2 + 2(xnum1 � xnum2)
*/
