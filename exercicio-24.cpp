#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salarioBase, percentualGratificacao, percentualDesconto, gratificacao, valorImposto, totalDesconto;
    
    percentualGratificacao = 20;
    percentualDesconto = 15;
    
    printf("Informe o salário-base (R$): ");
	scanf("%f", &salarioBase);
	
	valorImposto = salarioBase * (percentualDesconto / 100);
	
	gratificacao = salarioBase * (percentualGratificacao / 100);
	
	printf("********* Folha de Pagamento *********\nSalário-base ................. %.2f \nDesconto .....................-%.2f \nGratificação ................. %.2f \nSalário Líquido .............. %.2f", salarioBase, valorImposto, gratificacao, (salarioBase - valorImposto + gratificacao));
	
	getch();
}
/*
24. Elabore um algoritmo que leia o salário-base de um funcionário, calcule e mostre o seu salário a
receber, sabendo-se que esse funcionário tem gratificação 20% sobre o salário-base, e paga imposto
de 15% sobre o salário-base.
*/
