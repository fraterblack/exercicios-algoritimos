#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salarioBase, gratificacao, percentualDesconto, valorImposto, totalDesconto;
    
    gratificacao = 50;
    percentualDesconto = 10;
    
    printf("Informe o salário-base (R$): ");
	scanf("%f", &salarioBase);
	
	valorImposto = salarioBase * (percentualDesconto / 100);
	
	printf("********* Folha de Pagamento *********\nSalário-base ................. %.2f \nDesconto .....................-%.2f \nGratificação ................. %.2f \nSalário Líquido .............. %.2f", salarioBase, valorImposto, gratificacao, (salarioBase - valorImposto + gratificacao));
	
	getch();
}
/*
23. Elabore um algoritmo que leia o salário-base de um funcionário, calcule e mostre o seu salário a
receber, sabendo-se que esse funcionário tem gratificação de R$ 50,00 e paga imposto de 10%
sobre o salário-base.
*/
