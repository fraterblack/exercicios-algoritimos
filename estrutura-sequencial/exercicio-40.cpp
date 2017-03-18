#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salarioMinimo, salario;

    
    printf("Informe o valor do salário mínimo vigente (R$): ");
	scanf("%f", &salarioMinimo);
	
	printf("Informe o valor do seu salário (R$): ");
	scanf("%f", &salario);
	
	printf("Você recebe  %.2f salário(s) mínimo(s) \n", (salario / salarioMinimo));
	
	getch();
}
/*
40. Para vários tributos, a base de cálculo é o salário mínimo. 
Elabore um algoritmo que leia o valor do salário mínimo e o valor do salário de uma pessoa. 
Calcular e imprimir quantos salários mínimos essa pessoa ganha.
*/
