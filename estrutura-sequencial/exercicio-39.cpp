#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float saldo, salario, cheque1, cheque2, controleCpmf;
    
    saldo = 0;
    
    printf("Informe o salário (R$): ");
	scanf("%f", &salario);
	
	printf("Informe o valor do primeiro cheque (R$): ");
	scanf("%f", &cheque1);
	
	printf("Informe o valor do segundo cheque (R$): ");
	scanf("%f", &cheque2);
	
	printf("Saldo ......................   %.2f \n", saldo);
	saldo = salario;
	printf("Salário .................... + %.2f \n", salario);
	printf("Cheque ..................... - %.2f \n", cheque1);
	
	controleCpmf = (cheque1 * (0.38 / 100));
	saldo -= cheque1;
	saldo -= controleCpmf;
	printf("CPMF........................ - %.2f \n", controleCpmf);
	
	printf("Cheque ..................... - %.2f \n", cheque2);
	controleCpmf = (cheque2 * (0.38 / 100));
	saldo -= cheque2;
	saldo -= controleCpmf;
	printf("CPMF........................ - %.2f \n", controleCpmf);
	
	printf("Saldo ......................   %.2f \n", saldo);
	
	getch();
}
/*
39. Um trabalhador recebeu seu salário e o depositou em sua conta corrente bancária. 
Este trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. 
Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado. 
Considerando esse problema, elabore um algoritmo que imprima o saldo atual dessa pessoa.
*/
