#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float salarioBase, gratificacao, percentualDesconto, valorImposto, totalDesconto;
    
    gratificacao = 50;
    percentualDesconto = 10;
    
    printf("Informe o sal�rio-base (R$): ");
	scanf("%f", &salarioBase);
	
	valorImposto = salarioBase * (percentualDesconto / 100);
	
	printf("********* Folha de Pagamento *********\nSal�rio-base ................. %.2f \nDesconto .....................-%.2f \nGratifica��o ................. %.2f \nSal�rio L�quido .............. %.2f", salarioBase, valorImposto, gratificacao, (salarioBase - valorImposto + gratificacao));
	
	getch();
}
/*
23. Elabore um algoritmo que leia o sal�rio-base de um funcion�rio, calcule e mostre o seu sal�rio a
receber, sabendo-se que esse funcion�rio tem gratifica��o de R$ 50,00 e paga imposto de 10%
sobre o sal�rio-base.
*/
