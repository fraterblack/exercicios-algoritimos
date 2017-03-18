#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float valorDeposito, taxaJuros, totalRendimento;
    
    printf("Informe o valor do deposito (R$): ");
	scanf("%f", &valorDeposito);
	
	printf("Informe a taxa de juros (%%): ");
	scanf("%f", &taxaJuros);
	
	totalRendimento = valorDeposito * (taxaJuros / 100);
	
	printf("Valor Rendimento ................. %.2f \nTotal ................ %.2f", totalRendimento, valorDeposito + totalRendimento);
	
	getch();
}
/*
26. Elabore um algoritmo que leia o valor de um depósito, e o valor de uma taxa de juros, calcule e
mostre o valor do rendimento e o valor total depois do rendimento.
*/
