#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float numero, resultado;
    
    printf("Informe o primeiro número: ");
	scanf("%f", &numero);
	
	resultado = 8 / (2 - numero);
	
	printf("O resultado da função é %.2f", resultado);
	
	getch();
}
/*
15. Elabore um algoritmo que entre com o valor de x, calcule e imprima o valor de f(x).
f(x) =   8
       ------
       2 – x
*/
