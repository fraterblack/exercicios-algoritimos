#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salarioMinimo, consumo, valorKw, valorConsumido;

    
    printf("Informe o valor do sal�rio m�nimo vigente (R$): ");
	scanf("%f", &salarioMinimo);
	
	valorKw = salarioMinimo / 5;
	
	printf("Informe o consumo da resid�ncia (Kw): ");
	scanf("%f", &consumo);
	
	valorConsumido = (consumo * valorKw);
	
	printf("Valor do Kw: %.2f \n", valorKw);
	printf("Valor da fatura: %.2f \n", valorConsumido);
	printf("Valor da fatura com desconto 15%%: %.2f \n", valorConsumido - (valorConsumido * (15.00 / 100)));
	
	getch();
}
/*
41. Sabe-se que o quilowatt de energia custa um quinto do sal�rio m�nimo. 
Elabore um algoritmo que receba o valor do sal�rio m�nimo e a quantidade de quilowatts consumida por uma resid�ncia. 
Calcule e imprima:
a. O valor, em reais, de cada quilowatt
b. O valor, em reais, a ser pago por essa resid�ncia
c. O valor, em reais, a ser pago com desconto de 15%
*/
